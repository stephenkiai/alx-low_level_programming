#include "lists.h"
/**
 *strlen-returns the length of a string
 *@str: pointer to string
 *Return: length of string.
 */
size_t strlen(const char *str)
{
	size_t length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}

	return length;
}
