#include <stddef.h>
#include <stdint.h>

enum VGAColor
{
  BlackColor = 0,
  BlueColor = 1,
  GreenColor = 2,
  CyanColor = 3,
  RedColor = 4,
  MagentaColor = 5,
  BrownColor = 6,
  LightGreyColor = 7,
  DarkGreyColor = 8,
  LightBlueColor = 9,
  LightGreenColor = 10,
  LightCyanColor = 11,
  LightRedColor = 12,
  LightMagentaColor = 13,
  LightBrownColor = 14,
  WhiteColor = 15,
};

uint8_t MakeColor (enum VGAColor Foreground, enum VGAColor Background);
uint16_t MakeVGAEntry (char Char, uint8_t Color);
