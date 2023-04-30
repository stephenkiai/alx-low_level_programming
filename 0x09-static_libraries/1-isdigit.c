#include "main.h"

/**
 * _isdigit - It takes one argument
 * @c: The character to be checked
 * Description -  It checks for a digit
 * Return: 1 if c is a digit else return 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
