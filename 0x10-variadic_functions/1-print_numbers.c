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

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
