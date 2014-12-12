#include <stdlib.h>
#include <string.h>
#include <iso646.h>

#include <algorithm>
#include <sstream>
#include <string>
#include <tuple>
#include <vector>

#include <3ds.h>

#include "drawing.h"
#include "font.h"
#include "http.h"
#include "storage.h"
#include "ui.h"
#include "util.h"

using std::string;
using std::tuple;

using Title = std::string;
using TitleList = std::vector<Title>;
struct TitleListCursor {
  typename TitleList::const_iterator begin;
  typename TitleList::const_iterator end;
  typename TitleList::const_iterator selected;
};

TitleListCursor get_title_list_cursor(TitleList const& titles,
    TitleList::size_type const& offset) {
  return TitleListCursor{
    begin(titles),
    end(titles),
    std::next(begin(titles), offset)
  };
}

std::array<ListingMetadata, 3> get_title_list_draw_state(TitleListCursor const& cursor) {
  bool const there_are_no_titles = cursor.begin == cursor.end;
  ListingMetadata const hidden{ListingTitleDisplay::kHidden, nullptr, "", ""};
  if (there_are_no_titles) {
    return {{hidden, hidden, hidden}};
  }

  auto const visible_titles_begin = std::next(cursor.begin,
      std::distance(cursor.begin, cursor.selected) / 3 * 3);
  auto const visible_titles_end =
      std::distance(visible_titles_begin, cursor.end) < 3 ?
      cursor.end : std::next(visible_titles_begin, 3);
  std::array<ListingMetadata, 3> visible_titles{{hidden, hidden, hidden}};
  std::transform(visible_titles_begin, visible_titles_end,
      begin(visible_titles), [](Title const& title) {
    return ListingMetadata{ListingTitleDisplay::kVisible, nullptr, title, ""};
  });
  return visible_titles;
}

ListingScrollbar get_scrollbar_draw_state(TitleListCursor const& cursor) {
  auto const list_size = std::distance(cursor.begin, cursor.end);
  auto const cursor_position = std::distance(cursor.begin, cursor.selected);
  if (list_size < 3) {
    return {ListingScrollbarDisplay::kHidden, 0};
  }
  return {
      ListingScrollbarDisplay::kVisible,
      100 * cursor_position / (list_size - 1)
    };
}

Result download_app(std::string const& server, std::string const& title) {
  Result error{0};
  std::vector<std::string> title_file_listing;
  std::tie(error, title_file_listing) =
      get_file_listing_for_title(server, title);

  for (auto const& absolute_path : title_file_listing) {
    std::vector<u8> file_contents;
    std::tie(error, file_contents) = http_get(server + absolute_path);
    write_file(absolute_path, &file_contents[0], file_contents.size());
  }
  return error;
}

int main()
{
  // Initialize services
  srvInit();
  aptInit();
  hidInit(NULL);
  gfxInit();
  //gfxSet3D(true); // uncomment if using stereoscopic 3D
  fsInit();
  httpcInit();

  initialize_storage();

  string const kServer = "http://192.168.0.3:1337";

  /*
  Result error{0};
  TitleList homebrew_listing;
  std::tie(error, homebrew_listing) = get_homebrew_listing(kServer);
  /*/
  TitleList homebrew_listing{
    "homebrew-browser", "homebrew-browser", "homebrew-browser",
    "homebrew-browser", "homebrew-browser"
  };
  //*/

  u32 selected_index = 0;
  // Main loop
  while (aptMainLoop())
  {
    gspWaitForVBlank();
    hidScanInput();

    // Your code goes here

    u32 kDown = hidKeysDown();
    if (kDown & KEY_START) {
        break;  // Break in order to return to Homebrew Launcher.
    }
    if (kDown & KEY_UP) {
      selected_index = selected_index ? selected_index - 1 : 0;
    }
    if (kDown & KEY_DOWN) {
      selected_index = selected_index < homebrew_listing.size() - 1 ? selected_index + 1 : homebrew_listing.size() - 1;
    }
    if (kDown & KEY_A) {
      download_app(kServer, homebrew_listing[selected_index]);
    }

    draw_full_ui_from_state(ListingDrawState{
      SelectedCategory::kEmulators,
      get_title_list_draw_state(get_title_list_cursor(homebrew_listing, selected_index)),
      selected_index % 3,
      get_scrollbar_draw_state(get_title_list_cursor(homebrew_listing, selected_index)),
      ListingSortOrder::kAlphanumericDescending
    });

    u8* fb = gfxGetFramebuffer(GFX_BOTTOM, GFX_LEFT, NULL, NULL);
    putchar(fb, 20, 17, title_font, '@');

    // Flush and swap framebuffers
    gfxFlushBuffers();
    gfxSwapBuffers();
  }

  // Exit services
  httpcExit();
  fsExit();
  gfxExit();
  hidExit();
  aptExit();
  srvExit();
  return 0;
}
