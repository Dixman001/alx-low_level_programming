#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/*
 * list_len - returns the numbers of elements in list_t
 * @h: a pointer to struct
 *
 * Return: the number of element
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		if (len < h->len)
			len++;
			h = h->next;
	}
	return (len);
}
