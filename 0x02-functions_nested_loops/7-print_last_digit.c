#include "main.h"
/**
 * print_last_digit - Entry point
 * Description: print the last digit of a number
 * @n: an integer
 * Return: value returned
 */
int print_last_digit(int n)
{
	int d;

	d = (n % 10);

	if (d < 0)
	{
		d = (-1 * d);
	}
	_putchar (d + '0');

	return (d);
}
