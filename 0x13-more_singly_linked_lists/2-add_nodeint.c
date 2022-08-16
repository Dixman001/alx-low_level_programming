#include "lists.h"

/**
 * add_nodeint - adds node to begining of list
 * @head: head
 * @n: element of head
 *
 * Return: Pointer to the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = *head;

	*head = ptr;
	return (ptr);
}
