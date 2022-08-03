#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - entry point
 * @array: array
 * @size: size of variable
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int));
{
	if (array == NULL)
		return;

	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
