#include "main.h"
/**
 *flip_bits-  returns the number of bits to flip to move 1 number to another.
 *@n: first unsigned long int
 *@m: second unsigned long int
 *Return: num of bits required to flip to move
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int xor_result = (n ^ m);
	while (xor_result != 0)
	{
	if (xor_result & 1)
	{
		count++;
	}
	xor_result >>= 1;
	}
	return (count);
}
