#include <stddef.h>
#include <stdint.h>

enum VGAColor
{
    BLACK = 0,
    BLUE = 1,
    GREEN = 2,
    CYAN = 3,
    RED = 4,
    MAGENTA = 5,
    BROWN = 6,
    LIGHTGREY = 7,
    DARKGREY = 8,
    LIGHTBLUE = 9,
    LIGHTGREEN = 10,
    LIGHTCYAN = 11,
    LIGHTRED = 12,
    LIGHTMAGENTA = 13,
    LIGHTBROWN = 14,
    WHITE = 15,
};

uint8_t makeColor(enum VGAColor foreground, enum VGAColor background);
uint16_t makeVGAEntry(char c, uint8_t color);
