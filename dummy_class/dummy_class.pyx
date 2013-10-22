# distutils: language = c++
#b_best.pyx

from libcpp.string cimport string
from libc.string cimport strlen

cdef extern from "dummy.h":
    cdef cppclass _A "A":
        _A()
        void pop_modified(string)

    cdef cppclass _B "B":
        _B()
        void pop_modified(string)

    cdef cppclass _PopInterface "PopInterface":
        void pop_modified(string)

    cdef cppclass _Wrapper "Wrapper":
        _PopInterface *p    
        void pop_string(string)


cdef class A:
    cdef _A * thisptr

    def __cinit__(self):
        self.thisptr = new _A()

    def __dealloc__(self):
        del self.thisptr

    def pop_modified(self):
        cdef string cpps
        self.thisptr.pop_modified(cpps)
        return cpps.c_str()


cdef class B:
    cdef _B * thisptr

    def __cinit__(self):
        self.thisptr = new _B()

    def __dealloc__(self):
        del self.thisptr

    def pop_modified(self):
        cdef string cpps
        self.thisptr.pop_modified(cpps)
        return cpps.c_str()


cdef class Wrapper:
    cdef _Wrapper *thisptr

    def __cinit__(self):
        self.thisptr = new _Wrapper()

    def __dealloc__(self):
        del self.thisptr

    def setDummy(self, d):
        if isinstance(d, A):
            self.thisptr.p = (<_PopInterface*>(<A?>d).thisptr)
        elif isinstance(d, B):
            self.thisptr.p = (<_PopInterface*>(<B?>d).thisptr)
        else:
            raise TypeError("unsupported type")

    def pop_string(self):
        cdef string cpps
        self.thisptr.pop_string(cpps)
        return cpps.c_str()
