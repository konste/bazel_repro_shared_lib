#include <stdio.h>
#include <wchar.h> // For wprintf

#include "base_shared.h"
#include "middle_shared.h"

unsigned int middle_shared()
{
    unsigned int magic_number = ::base_shared();
    wprintf(L"Magic number received from base is %d.\n", magic_number);
    return magic_number;
}
