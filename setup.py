from distutils.core import setup, Extension

routiner = Extension('pyroutiner',
<<<<<<< HEAD
                    sources = ['main.c', 'routiner.c'],
                    )

setup (name = 'pyroutiner',
       version = '1.3.1',
       author='Shrishak Bhattarai',
       author_email='bshrishak9@gmail.com',
       url='https://github.com/bshrishak9/Routiner',
       description = 'Routine Generating Algorithm',
       classifiers=[
       "Programming Language :: Python :: Implementation :: CPython", 
       'License :: OSI Approved :: Apache Software License',
        "Operating System :: OS Independent",
       ],
=======
                    sources = ['main.c', 'routiner.c'])

setup (name = 'pyroutiner',
       version = '1.2',
       description = 'This is a test version of routiner',
>>>>>>> 6b5101d (cpp and header files created for conversion)
       ext_modules = [routiner])
