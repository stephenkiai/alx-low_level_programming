#include "variadic_functions.h"
/**
 *print_strings- prints strings
 *@n: number of strings passed to the function
 *@separator: the string to be printed btwn strings
 *Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list list;

char *str;

va_start(list, n);
for (i = 0; i < n; i++)
{
str = va_arg(list, char *);
if (!str)
str = "(nil)";
if (!separator)
printf("%s", str);
else if (separator && !i)
printf("%s", str);
else
printf("%s%s", separator, str);
}
va_end(list);
printf("\n");

}
