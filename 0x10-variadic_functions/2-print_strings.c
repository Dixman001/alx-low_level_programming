#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - entry point
 * @separator: string to print between numbers
 * @n: element
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *a;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		a = va_arg(args, char *);

		if (!a)
		{
			a = "(nil)";
		}
		if (!separator)
		{
			printf("%s", a);
		}
		else if (separator && i == 0)
		{
			printf("%s", a);
		}
		else
			printf("%s%s", separator, a);
	}
	va_end(args);

	printf("\n");
}
