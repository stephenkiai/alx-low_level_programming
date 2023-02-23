#include "main.h"

/**
 * print_numbers - is the function
 *
 * Description -  prints numbers from 0 to 9 followed by a new line
 * Return void
 */

void print_numbers(void)
{
int c;

for (c = '0'; c <= '9'; c++)
_putchar(c);
_putchar('\n');
}
