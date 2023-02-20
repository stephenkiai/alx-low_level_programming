#include <stdio.h>

/**
 * main - prints out the alphabet in lowercase except for 'qe'
 * Return: 0
 */
int main(void)
{

	char n;

	for (n = 'a'; n <= 'z'; n++)
		if (n != 'e' && n != 'q')
			putchar(n);
	putchar('\n');
	return (0);
}
