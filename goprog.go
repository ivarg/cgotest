package main

/*
#cgo CFLAGS: -I .
#cgo LDFLAGS: -lstdc++

#include "cpp-lib.h"

*/
import "C"

import (
	"fmt"
)

func main() {
	arg1 := 4
	arg2 := int(C.some_cpp_func(C.int(arg1)))
	fmt.Printf("Go.main(): C++ function took %d and returned %d\n", arg1, arg2)
}
