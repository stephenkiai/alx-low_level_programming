#include "variadic_functions.h"
/**
 *print_all- function that prints anything
 *@format: list of passed arguments types
 *Return: void
 */
void print_all(const char * const format, ...)
{

	unsigned int i = 0;
	char *str, *separator = "";
	va_list arguments;

	va_start(arguments, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
			case 'c':
				printf("%s%c", separator, va_arg(arguments, int));
				break;
			case 'i':
				printf("%s%i", separator, va_arg(arguments, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(arguments, double));
				break;
			case 's':
				str = va_arg(arguments, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", separator, str);
				break;
			default:
				i++;
				continue;
			}
			separator = ", ";
			i++;
		}
	}
	va_end(arguments);
	printf("\n");
}
