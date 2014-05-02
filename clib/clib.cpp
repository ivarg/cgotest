#include "clib.h"
#include <iostream>


class Hello {
public:
    Hello() {};
public:
    void Do();
};

void Hello::Do() {
    std::cout << "hello, C++" << std::endl;
}

void hello_Cpp() {
    Hello h;
    h.Do();
}

