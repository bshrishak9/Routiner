from distutils.core import setup, Extension

routiner = Extension('pyroutiner',
                    sources = ['main.c', 'routiner.c'],
                    swig_opts=['-modern', '/B'],
                    )

setup (name = 'pyroutiner',
       version = '1.0.2',
       author='Shrishak Bhattarai',
       author_email='bshrishak9@gmail.com',
       url='https://github.com/bshrishak9/Routiner',
       description = 'Routine Generating Algorithm',
       classifiers=[
       "Programming Language :: Python :: 3", 
       'License :: OSI Approved :: Apache Software License',
        "Operating System :: OS Independent",
       ],
       ext_modules = [routiner])
