#include <stdio.h>
#include <wchar.h> // For wprintf

#include "base_shared.h"

unsigned int base_shared()
{
    wprintf(L"\n Shared library successfully invoked.\n");
    return 42;
}
