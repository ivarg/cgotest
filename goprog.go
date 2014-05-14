package main

/*
#cgo CFLAGS: -I .
#cgo LDFLAGS: -L . -lc-lib -lstdc++

#include "c-lib.h"

*/
import "C"

import (
	"fmt"
)

func main() {
	arg := 4
	fmt.Printf("Go.main(): calling C function with arg %d\n", arg)
	arg = int(C.some_c_func(C.int(arg)))
	fmt.Printf("Go.main(): C function returned with result %d\n", arg)
}
