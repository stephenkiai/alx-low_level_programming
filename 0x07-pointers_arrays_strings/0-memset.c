#include "main.h"
/**
*_memset()- function fills n bytes memory area with constant byte.
*@b: constant byte.
*@s: a pointer to.
*@n: number of bytes to fill.
*Return: a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
s[i] = b;
return(s);
}
