#include "main.h"
/**
 *set_bit- sets the value of a bit to 1 at a given index.
 *@index: position of bit
 *@n: pointer to a unsigned long integer
 *Return: 1 if it successful, or -1 if error occurs
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
	return (-1);
	}
/*set bit to 1 at given index*/
	*n |= (1UL << index);
	return (1);
}
