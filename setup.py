from distutils.core import setup, Extension

routiner = Extension('pyroutiner',
                    sources = ['main.c', 'routiner.c'])

setup (name = 'pyroutiner',
       version = '1.2',
       description = 'This is a test version of routiner',
       ext_modules = [routiner])
