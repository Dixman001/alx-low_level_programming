#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - get the len, malloc * len
 * @min: min inpute
 * @max: max output
 * Return: poointer to new arr of int
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, len;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	arr = malloc(sizeof(int) * len);
	if (arr == NULL)
		return (NULL);

	for (i - 0; min <= max; i++)
	{
		arr[i] = min++;
	}
	return (arr);
}
