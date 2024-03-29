#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - a function thas finds int
 * @array: an array of int
 * @cmp: a pointer to array
 * @size: number of element
 * Return: -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
