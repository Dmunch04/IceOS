#include <stddef.h>
#include <stdint.h>
#include "console.h"
#include "colors.h"

// do not remove the "_" in the function name!
extern "C" void _kernelMain (void)
{
    Console terminal;
    terminal.init();
    terminal.setColor(makeColor(LIGHTGREEN, RED));
    terminal.printString("Hello World @ IceOS v0.1b2");
    for(;;);
}
