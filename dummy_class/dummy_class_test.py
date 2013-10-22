#!/usr/bin/env python
# encoding: utf-8

import dummy_class

if __name__ == '__main__':
    a = dummy_class.A()
    assert(a.pop_modified() == 'A')  # works
    b = dummy_class.B()
    assert(b.pop_modified() == 'B')  # works

    w = dummy_class.Wrapper()
    w.setDummy(a)  # TODO segfaults
    assert(w.pop_string() == 'A')
