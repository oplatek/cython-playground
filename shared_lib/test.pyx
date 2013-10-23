cdef extern from "test.h" namespace "playground":
    cdef cppclass Test:
        void number()


cdef class PyTest:
    cdef Test *thisptr

    def __cinit__(self):
        self.thisptr = new Test()

    def __dealloc__(self):
        del self.thisptr

    def number(self):
        self.thisptr.number()
