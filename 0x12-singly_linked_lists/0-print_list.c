#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/*
 * print_list - A function that prints all the elements of a list_t list.
 * @h: a pointer to struct
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);

	while (h != '\0')
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		i++;
	}
	return (i);
}
