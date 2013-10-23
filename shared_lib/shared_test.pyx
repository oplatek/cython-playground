cdef extern from "test.h" namespace "playground":
    cdef cppclass _Test "Test":
        void Print()


cdef class Test:
    cdef _Test *thisptr

    def __cinit__(self):
        self.thisptr = new _Test()

    def __dealloc__(self):
        del self.thisptr

    def myprint(self):
        self.thisptr.Print()
