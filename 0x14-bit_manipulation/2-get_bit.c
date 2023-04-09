#include "main.h"
/**
 *get_bit- returns the value of a bit at a given index.
 *@index: position of a bit
 *@n: unsigned long integer
 *Return: value of bit or -1 if error occurs.
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
/*return the value of the bit at the index*/
 return ((n & (1UL << index)) != 0);
}
