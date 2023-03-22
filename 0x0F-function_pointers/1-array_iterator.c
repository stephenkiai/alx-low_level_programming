#include <stddef.h>
#include "function_pointers.h"
/**
 *array_iterator-executes function given as a parameter on @ element of array.
 *@size: array size
 *@action: pointer to function to be used
 *@array: array to execute function
 *return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array && action)
while  (size--)
{
action(*(array++));
}
}
