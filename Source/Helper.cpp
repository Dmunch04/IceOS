#include "Helper.h"
#include <stddef.h>
#include <stdint.h>

size_t StringLength (const char* String)
{
  size_t Length = 0;
  while (String[Length] != 0)
    Length++;

  return Length;
}
