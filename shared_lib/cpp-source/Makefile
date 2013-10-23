all: libtest.so

test.o: test.cpp
	g++ -Wall -fPIC -c -o $@ $^

libtest.so: test.o
	g++ -shared -Wl,-soname,$@ -o $@ $^

test_test: test_test.cpp libtest.so test.h
	g++ -Wall test_test.cpp -L. -ltest  -o $@

test: test_test
	LD_LIBRARY_PATH=. ./test_test

