#include <stdio.h>

#include "c-lib.h"
#include "cpp-lib.h"

int some_c_func(int arg)
{
        printf("C.some_c_func(): called with arg = %d\n", arg);
        /* return arg; */
        printf("C.some_c_func(): calling C++ function with arg = %d\n", arg);
        return some_cpp_func(arg);
}
