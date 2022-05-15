#define PY_SSIZE_T_CLEAN
#include "Python.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

<<<<<<< HEAD
<<<<<<< HEAD
#include "routiner.h"
=======
#include "obs.h"
>>>>>>> 6b5101d (cpp and header files created for conversion)
=======
#include "obs.h"
>>>>>>> 6b5101d6cf104d46833812561f6789f979590619

int main(int argc, char *argv[])
{

    /* Pass argv[0] to the Python interpreter */
    Py_SetProgramName((wchar_t *)argv[0]);

    /* Initialize the Python interpreter.  Required.
       If this step fails, it will be a fatal error. */
    Py_Initialize();

    PyInit_pyroutiner();
    return 0;
}
