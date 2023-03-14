#include "main.h"
#include <stdlib.h>
/**
 *create_array - creates array of chars & initializes it with a specific char.
 *@c: char to initialize array with.
 *@size: size of array to be created.
 *Return: pointer to the array or NULL if malloc does not work.
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *s;

if (size == 0)
{
return (NULL);
}
s = malloc(size * sizeof(char));
if (s == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
s[i] = c;
}
return (s);
}
