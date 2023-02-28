#include "main.h"
/**
 *puts_half - prints half of a string.
 *@str: pointer to string.
 *
 *Return: void.
 */
void puts_half(char *str)
{
	int n, length, middle;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		middle = length / 2;
		for (n = middle; n < length; n++)
		{
			_putchar(str[n]);
		}
	}
	else
	{
		middle = (length - 1) / 2;
		for (n = middle + 1; n < length; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
