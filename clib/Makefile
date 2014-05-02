

static:
	g++ -c clib.cpp
	ar rcs libclib.a clib.o
	gcc user.c -L. -lclib -lstdc++ -o user-static

shared:
	g++ -fPIC -c clib.cpp
	# gcc -shared -soname,libclib.so.1 -o libclib.so.1.0 clib.o
	gcc -lstdc++ -dynamiclib -o libclib.1.0.dylib clib.o
	ln -sf libclib.dylib.1.0 libclib.dylib
	ln -sf libclib.dylib.1.0 libclib.1.dylib
	export LD_LIBRARY_PATH=.
	gcc user.c -L. -lclib -lstdc++ -o user-shared

clean:
	rm *.dylib *-shared *-static *.a *.o
