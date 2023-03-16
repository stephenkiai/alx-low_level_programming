#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * malloc_checked -  function that allocates memory using malloc.
 * @b: size of memory to allocate
 * Return: ptr to allocated memory, fails termination 98
 */
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (!ptr)
exit(98);
return (ptr);
}
