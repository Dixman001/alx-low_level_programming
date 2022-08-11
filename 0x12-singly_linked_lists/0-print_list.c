#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/*
 *
 */

size_t print_list(const list_t *h)
{
	int i;
	
	if (h == NULL)
		return 0;

	for (i = 0; h != '\0'; i++)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s", h->len, h>str);
		}
		h = h->next;
	}
	return (i);
}
