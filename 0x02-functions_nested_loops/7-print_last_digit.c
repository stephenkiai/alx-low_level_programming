#include "main.h"
/**
 * print_last_digit - pritns the last digit of a number
 * @n: integer whose last digit is to be printed
 * Return: lastdigit of n
 */

int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = ((n % 10));

	_putchar(lastDigit + 48);

	return (lastDigit);
}
