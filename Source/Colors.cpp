#include "Colors.h"
#include <stddef.h>
#include <stdint.h>

uint8_t MakeColor (enum VGAColor Foreground, enum VGAColor Background)
{
  return Foreground | Background << 4;
}

uint16_t MakeVGAEntry (char Char, uint8_t Color)
{
  uint16_t Char16 = Char;
  uint16_t Color16 = Color;

  return Char16 | Color16 << 8;
}
