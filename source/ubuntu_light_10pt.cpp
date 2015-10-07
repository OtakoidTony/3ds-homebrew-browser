#include <3ds.h>
#include "font.h"
std::array<homebrew_browser::CharacterDescription, 128> ubuntu_light_10pt_desc{{
 {0, 26, 64, 1, 1, 0, 0, 0},
 {0, 0, 0, 0, 0, 0, 0, 0},
 {0, 0, 0, 0, 0, 0, 0, 0},
 {0, 0, 0, 0, 0, 0, 0, 0},
 {0, 0, 0, 0, 0, 0, 0, 0},
 {0, 0, 0, 0, 0, 0, 0, 0},
 {0, 0, 0, 0, 0, 0, 0, 0},
 {0, 0, 0, 0, 0, 0, 0, 0},
 {8, 21, 56, 1, 1, 0, 0, 0},
 {9, 15, 40, 1, 1, 0, 0, 2},
 {0, 0, 0, 0, 0, 0, 0, 0},
 {0, 0, 0, 0, 0, 0, 0, 0},
 {0, 0, 0, 0, 0, 0, 0, 0},
 {13, 30, 64, 1, 1, 0, 0, 2},
 {0, 0, 0, 0, 0, 0, 0, 0},
 {0, 0, 0, 0, 0, 0, 0, 0},
 {0, 0, 0, 0, 0, 0, 0, 0},
 {0, 0, 0, 0, 0, 0, 0, 0},
 {0, 0, 0, 0, 0, 0, 0, 0},
 {0, 0, 0, 0, 0, 0, 0, 0},
 {0, 0, 0, 0, 0, 0, 0, 0},
 {0, 0, 0, 0, 0, 0, 0, 0},
 {0, 0, 0, 0, 0, 0, 0, 0},
 {0, 0, 0, 0, 0, 0, 0, 0},
 {0, 0, 0, 0, 0, 0, 0, 0},
 {0, 0, 0, 0, 0, 0, 0, 0},
 {0, 0, 0, 0, 0, 0, 0, 0},
 {0, 0, 0, 0, 0, 0, 0, 0},
 {0, 0, 0, 0, 0, 0, 0, 0},
 {29, 24, 64, 1, 1, 0, 0, 0},
 {0, 0, 0, 0, 0, 0, 0, 0},
 {0, 0, 0, 0, 0, 0, 0, 0},
 {32, 18, 48, 1, 1, 0, 0, 2},
 {33, 113, 54, 3, 7, 0, 5, 3},
 {34, 68, 69, 4, 3, 0, 4, 4},
 {35, 42, 40, 7, 7, 0, 5, 7},
 {36, 0, 0, 5, 11, 0, 3, 6},
 {37, 111, 30, 8, 7, 0, 5, 9},
 {38, 9, 42, 8, 7, 0, 5, 7},
 {39, 85, 68, 2, 3, 0, 4, 2},
 {40, 36, 11, 3, 10, 0, 4, 3},
 {41, 49, 11, 2, 10, 0, 4, 3},
 {42, 0, 66, 5, 6, 0, 5, 5},
 {43, 120, 54, 6, 6, 0, 6, 6},
 {44, 88, 68, 2, 3, 0, 11, 2},
 {45, 105, 68, 3, 2, 0, 8, 3},
 {46, 12, 40, 2, 1, 0, 11, 3},
 {47, 23, 11, 4, 10, 0, 4, 4},
 {48, 35, 48, 5, 7, 0, 5, 6},
 {49, 109, 54, 3, 7, 1, 5, 6},
 {50, 41, 48, 5, 7, 0, 5, 6},
 {51, 42, 56, 5, 7, 0, 5, 6},
 {52, 47, 48, 5, 7, 0, 5, 6},
 {53, 59, 47, 5, 7, 0, 5, 6},
 {54, 71, 46, 5, 7, 0, 5, 6},
 {55, 77, 46, 5, 7, 0, 5, 6},
 {56, 83, 46, 5, 7, 0, 5, 6},
 {57, 95, 46, 5, 7, 0, 5, 6},
 {58, 43, 70, 2, 5, 0, 7, 3},
 {59, 125, 46, 2, 7, 0, 7, 2},
 {60, 55, 63, 6, 5, 1, 7, 6},
 {61, 86, 62, 5, 5, 0, 7, 6},
 {62, 80, 62, 5, 5, 0, 7, 6},
 {63, 123, 38, 4, 7, 0, 5, 4},
 {64, 55, 11, 8, 9, 0, 5, 9},
 {65, 58, 39, 7, 7, 0, 5, 7},
 {66, 101, 46, 5, 7, 0, 5, 6},
 {67, 107, 46, 5, 7, 0, 5, 6},
 {68, 95, 38, 6, 7, 0, 5, 7},
 {69, 113, 46, 5, 7, 0, 5, 6},
 {70, 92, 54, 4, 7, 0, 5, 5},
 {71, 14, 50, 6, 7, 0, 5, 7},
 {72, 74, 38, 6, 7, 0, 5, 7},
 {73, 117, 54, 2, 7, 0, 5, 3},
 {74, 87, 54, 4, 7, 0, 5, 5},
 {75, 18, 40, 7, 7, 0, 5, 6},
 {76, 82, 54, 4, 7, 0, 5, 5},
 {77, 102, 30, 8, 7, 0, 5, 9},
 {78, 28, 48, 6, 7, 0, 5, 7},
 {79, 26, 40, 7, 7, 0, 5, 8},
 {80, 119, 46, 5, 7, 0, 5, 6},
 {81, 64, 11, 7, 9, 0, 5, 8},
 {82, 0, 58, 5, 7, 0, 5, 6},
 {83, 6, 58, 5, 7, 0, 5, 6},
 {84, 81, 38, 6, 7, 0, 5, 7},
 {85, 88, 38, 6, 7, 0, 5, 7},
 {86, 0, 42, 8, 7, 0, 5, 9},
 {87, 48, 31, 10, 7, 0, 5, 11},
 {88, 109, 38, 6, 7, 0, 5, 7},
 {89, 116, 38, 6, 7, 0, 5, 7},
 {90, 12, 58, 5, 7, 0, 5, 6},
 {91, 124, 0, 3, 10, 0, 4, 3},
 {92, 18, 11, 4, 10, 0, 4, 4},
 {93, 40, 11, 2, 10, 0, 4, 3},
 {94, 52, 70, 5, 4, 0, 5, 5},
 {95, 91, 68, 5, 2, 0, 12, 5},
 {96, 81, 68, 3, 3, 0, 4, 4},
 {97, 68, 63, 5, 5, 0, 7, 6},
 {98, 62, 21, 5, 8, 0, 4, 6},
 {99, 0, 73, 4, 5, 0, 7, 5},
 {100, 86, 21, 5, 8, 0, 4, 6},
 {101, 92, 62, 5, 5, 0, 7, 6},
 {102, 18, 31, 4, 8, 0, 4, 4},
 {103, 18, 58, 5, 7, 0, 7, 6},
 {104, 26, 22, 5, 8, 0, 4, 6},
 {105, 97, 54, 3, 7, 0, 5, 3},
 {106, 8, 22, 3, 9, 0, 5, 3},
 {107, 12, 22, 6, 8, 0, 4, 5},
 {108, 37, 31, 3, 8, 0, 4, 3},
 {109, 23, 66, 8, 5, 0, 7, 9},
 {110, 62, 63, 5, 5, 0, 7, 6},
 {111, 74, 62, 5, 5, 0, 7, 6},
 {112, 30, 56, 5, 7, 0, 7, 6},
 {113, 36, 56, 5, 7, 0, 7, 6},
 {114, 39, 70, 3, 5, 0, 7, 4},
 {115, 10, 73, 4, 5, 0, 7, 5},
 {116, 72, 54, 4, 7, 0, 5, 5},
 {117, 110, 62, 5, 5, 0, 7, 6},
 {118, 48, 64, 6, 5, 0, 7, 7},
 {119, 12, 66, 10, 5, 0, 7, 11},
 {120, 25, 72, 4, 5, 0, 7, 5},
 {121, 0, 50, 6, 7, 0, 7, 7},
 {122, 20, 72, 4, 5, 0, 7, 5},
 {123, 122, 11, 4, 9, 0, 5, 4},
 {124, 46, 11, 2, 10, 0, 4, 3},
 {125, 4, 23, 3, 9, 0, 5, 4},
 {126, 62, 69, 5, 3, 0, 8, 6},
 {0, 0, 0, 0, 0, 0, 0, 0},
}};
