#include "main.h"
/**
 * strlen - computes the length of the string s.
 * @s: the string to compute the length of.
 * Return: the length of the string s.
 */
size_t strlen(const char *s)
{
	size_t len = 0;

	while (*s++)
		len++;
	return len;
}
