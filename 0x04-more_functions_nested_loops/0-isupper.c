#include <stdio>
#include "main.h"

/**
 * _isupper - checks for upper case
 * @c: a declared character
 * Return: 1 if c is uppercase and 0 if otherwise
 */

int _isupper(int c)
{
	_putchar (c >= 'A' && c <= 'Z');

	return (c);
}
