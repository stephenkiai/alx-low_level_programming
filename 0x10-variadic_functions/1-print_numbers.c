#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
/**
 *print_numbers- prints numbers followed by a new line
 *@n: number of integers passed to the function
 *@separator: string to be printed btwn numbers
 *Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0, numbers;

va_list list;

/*if (i < n-1 && separator != NULL)*/
{
va_start(list, n);

for (i = 0; i < n; i++)
{
numbers = va_arg(list, int);
printf("%d%s", numbers, (separator && i != n - 1) ? separator : "");
}
va_end(list);
printf("\n");
}
}
