#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - entry point
 * @separator: string to print between numbers
 * @n: element
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *a;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		a = va_arg(args, char *);

		if (a  == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", a);

		if (1 < n - 1 || separator != NULL)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
