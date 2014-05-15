#include "cpp-lib.h"
#include <iostream>

int some_cpp_func(int arg) {
    std::cerr << "C.some_cpp_func(): writing to stderr... " << std::endl;
    return arg+2;
}

