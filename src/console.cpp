#include <stddef.h>
#include <stdint.h>

#include "console.h"
#include "helper.h"
#include "colors.h"

void Console::init()
{
    this->terminalRow = 0;
    this->terminalColumn = 0;
    this->terminalColor = makeColor(LIGHTGREY, BLACK);
    this->terminalBuffer = (uint16_t*) 0xB8000;

    for (size_t y = 0; y < this->VGAHeight; y++)
    {
        for (size_t x = 0; x < this->VGAWidth; x++)
        {
            this->putEntryAt(' ', this->terminalColor, x, y);
            //const size_t i = y * this->VGAWidth + x;
            //this->terminalBuffer[i] = makeVGAEntry(' ', this->terminalColor);
        }
    }
}

void Console::setColor(uint8_t color)
{
    this->terminalColor = color;
}

void Console::putEntryAt(char c, uint8_t color, size_t x, size_t y)
{
    const size_t i = y * this->VGAWidth + x;
    this->terminalBuffer[i] = makeVGAEntry(c, color);
}

void Console::putChar(char c)
{
    this->putEntryAt(c, this->terminalColor, this->terminalColumn, this->terminalRow);

    if (++this->terminalColumn == this->VGAWidth)
    {
        this->terminalColumn = 0;

        if (++this->terminalRow == this->VGAHeight)
        {
            this->terminalRow = 0;
        }
    }
}

void Console::printString(const char *s)
{
    size_t len = stringLength(s);

    for (size_t i = 0; i < len; i++)
    {
        this->putChar(s[i]);
    }
}
