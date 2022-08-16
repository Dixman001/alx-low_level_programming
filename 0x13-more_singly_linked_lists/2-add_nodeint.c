#include "lists.h"

/**
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	ptr->data = n;
	ptr->link = NULL;

	ptr->link = head;
	head = ptr;
	return (head);
}
