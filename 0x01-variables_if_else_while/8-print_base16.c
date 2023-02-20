#include <stdio.h>

/**
 * main - prints out all the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
		putchar(n);
	for (n = 'a'; n <= 'f'; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
