#include "helper.h"
#include <stddef.h>
#include <stdint.h>

size_t stringLength (const char *s)
{
    size_t len = 0;
    while (s[len] != 0)
        len++;

    return len;
}
