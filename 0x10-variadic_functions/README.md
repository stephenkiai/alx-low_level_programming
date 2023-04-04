**Variadic Functions in C**

Variadic functions are a type of function in C that can accept an **unspecified number of 
arguments**. They are declared using an **ellipsis (...)** in the parameter list.

To use variadic functions in C, you'll need to include the **stdarg.h** header file, which 
provides the necessary **macros** and types for working with variable **argument lists**.

The **arg_count** argument is used to determine the number of arguments that were **passed**
to the function.

Inside the function, you can access the arguments using the **va_list** type, which is declared
in the stdarg.h header file.

The **va_start()** macro initializes the list, and the **va_arg()** macro retrieves each argument 
from the list.

Finally, the **va_end()** macro is used to clean up the list.

Variadic functions are commonly used in situations where the number of arguments that a function 
needs to accept is unknown or can vary.

They are often used for tasks such as printing formatted output or performing similar operations 
on a variable number of inputs.

Author: **Stephen Kiai**
