#!/usr/bin/env python
# encoding: utf-8
# setup.py
# notes: cythonize examples are horrendously broken
# On Windows, you need to execute:
# set VS90COMNTOOLS=%VS100COMNTOOLS%
# python setup.py build_ext --compiler=msvc
from distutils.core import setup
from distutils.extension import Extension
from Cython.Distutils import build_ext
import glob

sources = glob.glob('./cpp-source/*.cpp')
sources.append('n_best.pyx')

ext_modules = [Extension('n_best',
                         include_dirs=['./cpp-source'],
                         language='c++',
                         sources=sources,
                         )]

setup(
    name='n_best',
    cmdclass={'build_ext': build_ext},
    ext_modules=ext_modules
)
