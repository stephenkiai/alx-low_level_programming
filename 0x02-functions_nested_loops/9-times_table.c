#include "main.h"
/**
 * times_table - prints times table
 */

void times_table(void)
{
int n, j, prod;

for (n = 0; n < 10; n++)
{
for (j = 0; j < 10; j++)
{
if (j == 0)
{
_putchar(48);
continue;
}
prod = n * j;
_putchar(',');
_putchar(' ');
if (prod >= 10)
{
_putchar(prod / 10 + 48);
_putchar(prod % 10 + 48);
}
else
{
_putchar(' ');
_putchar(prod + 48);
}
}
_putchar('\n');
}
}
