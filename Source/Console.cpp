#include <stddef.h>
#include <stdint.h>

#include "Console.h"
#include "Helper.h"
#include "Colors.h"

void Console::Initialize ()
{
  this -> TerminalRow = 0;
  this -> TerminalColor = 0;
  this -> TerminalColor = MakeColor (LightGreyColor, BlackColor);
  this -> TerminalBuffer = (uint16_t*) 0xB8000;

  for (size_t YIndex = 0; YIndex < this -> VGAHeight; YIndex++)
  {
    for (size_t XIndex = 0; XIndex < this -> VGAWidth; XIndex++)
    {
      const size_t Index = YIndex * this -> VGAWidth + XIndex;
      this -> TerminalBuffer[Index] = MakeVGAEntry (' ', this -> TerminalColor);
    }
  }
}

void Console::SetColor (uint8_t Color)
{
  this -> TerminalColor = Color;
}

void Console::PutEntryAt (char Char, uint8_t Color, size_t XIndex, size_t YIndex)
{
  const size_t Index = YIndex * this -> VGAWidth + XIndex;
  this -> TerminalBuffer[Index] = MakeVGAEntry (Char, Color);
}

void Console::PutChar (char Char)
{
  Console::PutEntryAt (Char, this -> TerminalColor, this -> TerminalColumn, this -> TerminalRow);

  if (++this -> TerminalColumn == VGAWidth)
  {
    this -> TerminalColumn = 0;

    if (++this -> TerminalRow == VGAHeight)
    {
      this -> TerminalRow = 0;
    }
  }
}

void Console::Print (const char* Data)
{
  size_t DataLength = StringLength (Data);

  for (size_t Index = 0; Index < DataLength; Index++)
  {
    Console::PutChar (Data[Index]);
  }
}
