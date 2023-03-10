#include "main.h"
/**
 *_strlen -finds and returns the length of a string.
 *@s: pointer.
 *
 *Return: length of string.
 */
int _strlen(char *s)
{
int i = 0;

while (*s != '\0')
{
i++;
s++;
}
return (i);
}
