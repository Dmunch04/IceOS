#ifndef __CONSOLE_H
#define __CONSOLE_H

#include <stddef.h>
#include <stdint.h>

class Console
{
    public:
        void init();
        void setColor(uint8_t color);
        void putEntryAt(char c, uint8_t color, size_t x, size_t y);
        void putChar(char c);
        void printString(const char *s);

        static const size_t VGAWidth = 80;
        static const size_t VGAHeight = 24;

        size_t terminalRow;
        size_t terminalColumn;
        uint8_t terminalColor;
        uint16_t* terminalBuffer;
};

#endif
