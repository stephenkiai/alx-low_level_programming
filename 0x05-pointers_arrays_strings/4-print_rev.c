#include "main.h"
/**
 *print_rev - prints a string, in reverse, followed by a new line.
 *@s: string pointer
 *
 *Return: 0 success
 */
void print_rev(char *s)
{
int length, last;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}

	last = length - 1;
	for (; last >= 0; last--)
	{
		_putchar(s[last]);
	}
	_putchar('\n');
}
