#include "cpp-lib.h"
// #include <cstdio>
#include <stdio.h>
#include <iostream>


class T {};


int internal_cpp_func(int arg) {
    // std::cerr << "C.some_cpp_func(): arg = " << n << std::endl;
    // printf("C.some_cpp_func(): arg = %d\n", n);
    return arg++;
}

int some_cpp_func(int arg) {
    std::cerr << "C.some_cpp_func(): writing to stderr... " << std::endl;

    printf("C.some_cpp_func(): called with arg = %d\n", arg);
    arg++;
    printf("C.some_cpp_func(): returning arg = %d\n", arg);
    return arg;
    // return some_cpp_func2(n);
}

