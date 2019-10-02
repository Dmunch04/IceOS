#ifndef __CONSOLE_H
#define __CONSOLE_H

  #include <stddef.h>
  #include <stdint.h>

  class Console
  {
    public:
      void Initialize ();
      void SetColor (uint8_t Color);
      void PutEntryAt (char Char, uint8_t Color, size_t XIndex, size_t YIndex);
      void PutChar (char Char);
      void Print (const char* Data);

      static const size_t VGAWidth = 80;
      static const size_t VGAHeight = 24;

      size_t TerminalRow;
      size_t TerminalColumn;
      uint8_t TerminalColor;
      uint16_t* TerminalBuffer;
  };

#endif
