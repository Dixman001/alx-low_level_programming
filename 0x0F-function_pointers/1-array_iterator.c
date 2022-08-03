#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - entry point
 * @array: array
 * @size: size of variable
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}

void print_elem(int elem)
{
	printf("%d\n", elem);
}

void print_elem_hex(int elem)
{
	printf("0x%x\n", elem);
}

int main(void)
{
	int array[5] = {0, 98, 402, 1024, 4096};
	array_iterator(array, 5, &print_elem);
	array_iterator(array, 5, &print_elem_hex);
	return (0);
}
