#include "main.h"
/**
* _print_rev_recursion - Prints a string in reverse and a new line.
* @s: Pointer.
*
* Return: void
*/
void _print_rev_recursion(char *s)
{
if (*s == '\0')

return;

_print_rev_recursion(s + 1);

_putchar(*s);
}
