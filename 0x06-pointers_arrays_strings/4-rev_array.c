#include "main.h"

/**
 * reverse_array - a function that reverses an array of int
 * @a: content
 * @n: elements of content
 * Return: Always 0 (Success)
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < (n / 2); i++)
	{
		temp = a[i];

		a[i] = a[n - i - 1];

		a[n -i -1] = temp;
	}
}
