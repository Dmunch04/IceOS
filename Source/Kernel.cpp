#include <stddef.h>
#include <stdint.h>
#include "Console.h"
#include "Colors.h"

// do not remove the "_" in the function name!
extern "C" void _KernelMain (void)
{
  Console Terminal;
  Terminal.Initialize ();
  Terminal.SetColor (MakeColor (LightGreenColor, RedColor));
  Terminal.Print ("Hello World @ IceOS v0.1b1");
  for (;;);
}
