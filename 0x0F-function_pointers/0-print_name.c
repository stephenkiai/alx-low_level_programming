#include "function_pointers.h"
/**
 *print_name- prints a name
 *@name: char name to be printed
 *@f: function pointer
 *return:void 
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
