#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - entry point
 * @a: int
 * @b: int2
 * Return: addition of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - entry point
 * @a: int
 * @b: int2
 * Return: subtraction of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - entry point
 * @a: int
 * @b: int2
 * Return: multiplication of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - entry point
 * @a: int
 * @b: int2
 * Return: division of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - entry point
 * @a: int
 * @b: int2
 * r
 * Return: the the left over from a / b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
