#include "main.h"
/**
 *print_binary- prints the binary representation of a number.
 *@n: unsigned long integer
 *Return: void.
 */
void print_binary(unsigned long int n)
{
unsigned long int mask = 1ul << ((sizeof(unsigned long int) * 8) - 1);
int printed = 0;

if (n == 0)
{
_putchar('0');
return;
}

while (mask > 0)
{
if (n & mask)
{
_putchar('1');
printed = 1;
}
else if (printed)
{
_putchar('0');
}
mask >>= 1;
}
}
