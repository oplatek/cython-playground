#!/usr/bin/env python
# encoding: utf-8

from n_best import pyfill_2d

if __name__ == '__main__':
    d2 = pyfill_2d()
    assert(d2[1][1] == 2)
    assert(d2[3][3] == 6)
    assert(d2[9][9] == 18)
