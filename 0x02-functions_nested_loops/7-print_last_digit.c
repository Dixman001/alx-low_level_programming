#include "main.h"
/**
 * print_last_digit - Entry point
 * Description: print the last digit of a number
 * @n: an integer
 * Return: value returned
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = -n;
	return (n % 10);
}
