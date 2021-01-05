#include "colors.h"
#include <stddef.h>
#include <stdint.h>

uint8_t makeColor(enum VGAColor foreground, enum VGAColor background)
{
  return foreground | background << 4;
}

uint16_t makeVGAEntry(char c, uint8_t color)
{
  uint16_t c16 = c;
  uint16_t color16 = color;

  return c16 | color16 << 8;
}
