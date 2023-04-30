#include "main.h"
/**
 *_puts - prints a string, followed by a new line, to stdout.
 *@str: string pointer.
 *
 *Return: 0 success
 *
 */
void _puts(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		i++;
		str++;
	}
	_putchar('\n');
}
