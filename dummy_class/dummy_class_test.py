#!/usr/bin/env python
# encoding: utf-8

import dummy_class

if __name__ == '__main__':
    d = dummy_class.Dummy()
    d.store("Jak se vede?")
    t = d.pop_modified()
    print t
    assert("Was said Jak se vede?" == t)
