#include "lists.h"

/**
 * free_list - frees list
 * @head: pointer to the head of the list
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *current;

	while (head)
	{
		current = head;

		head = head->next;

		free(current->str);
		free(current);
	}
}
