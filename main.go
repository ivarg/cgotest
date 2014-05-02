package main

// #cgo LDFLAGS: -L/Users/ivar/Utveckling/golang/src/cgotest/clib -lclib -lstdc++
// #cgo CFLAGS: -I/Users/ivar/Utveckling/golang/src/cgotest/clib
// #include "clib.h"
import "C"

func main() {
	C.hello_Cpp()
}
