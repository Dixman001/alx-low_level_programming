#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - entry point for variadic func
 * @n: first element
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum;

	va_start(args, n);

	sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);
	return (sum);

	if (n == NULL)
	{
		return (NULL);
	}
}
