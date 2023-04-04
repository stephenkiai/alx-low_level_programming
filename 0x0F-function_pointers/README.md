**Function Pointers in C**

    Functions in C are treated as **"first-class citizens"**
    
    Function pointers allow you to store the **address** of a function in a variable
    
    To declare a function pointer in C, use the syntax **return_type (*pointer_name)(parameter_list);**
    
    Assign a function to a pointer variable using the function name: **\pointer_name = function_name;\**
    
    Call the function using the function pointer: **\(*pointer_name)(argument_list);\** or 
    **\pointer_name(argument_list);\**
    
    Function pointers can be used to pass functions as parameters or store related functions in an array
    
    They are also used to **implement callbacks**, where a function is called in response 
    to an event or condition

Author:

[**Stephen Kiai**]
