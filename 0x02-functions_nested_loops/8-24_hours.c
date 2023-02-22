#include "main.h"
/**
 * jack_bauer - prints every minute of the day 
 */
void jack_bauer(void)
{
	int n, j;

	for (n = 0; n < 24; n++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar(n / 10 + 48);
			_putchar(n % 10 + 48);
			_putchar(':');
			_putchar(j / 10 + 48);
			_putchar(j % 10 + 48);
			_putchar('\n');
		}
	}
}
