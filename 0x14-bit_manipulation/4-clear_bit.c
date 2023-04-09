#include "main.h"
/**
 *clear_bit- sets the value of a bit to 0 at a given index.
 *@index: position of bit
 *@n: pointer to unsigned long integer
 *Return: 1 if successful, or -1 if an error occurs.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
/* set bit to 0 at a given index*/
*n &= ~(1UL << index);
return (1);
}
