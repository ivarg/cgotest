package main

import "fmt"

/*
#include <stdio.h>
extern void F();
*/
import "C"

//export G
func G() {
	fmt.Println("Gaitan!")
}

func Example() {
	C.F()
}

func main() {
	Example()
}
