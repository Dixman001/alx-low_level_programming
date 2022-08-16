#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"

/**
 * print_listint - prints all element in listint_t
 * @h: pointer to element
 * Return: elements in listint_t
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *present = h;
	size_t i = 0;

	while (present != NULL)
	{
		printf("%d\n", present->n);
		i += 1;
		present = present->next;
	}
	return (i);
}
