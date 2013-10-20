#b_best.pyx
from libcpp.vector cimport vector


cdef extern from "n_best.h" namespace "nbest":
    cdef size_t fill_2d(vector[vector[int]] v_out) 


def pyfill_2d():
    cdef vector[vector[int]] t
    fill_2d(t)
    d2 = []
    for j in range(t.size()):
        v = [t[j][i] for i in range(t[j].size())]
        d2.append(v)
    return d2
