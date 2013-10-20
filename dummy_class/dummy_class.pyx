#b_best.pyx
from libcpp.string cimport string
from libc.string cimport strlen

cdef extern from "dummy.h":
    cdef cppclass _Dummy "Dummy":
        _Dummy()
        void store(string)
        void pop_modified(string)

cdef class Dummy:
    cdef _Dummy * thisptr

    def __cinit__(self):
        self.thisptr = new _Dummy()

    def __dealloc__(self):
        del self.thisptr

    def store(self, char* s):
        cdef string cpps = string(s)
        self.thisptr.store(cpps)

    def pop_modified(self):
        cdef string cpps
        self.thisptr.pop_modified(cpps)
        return cpps.c_str()
