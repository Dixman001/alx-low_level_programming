#include "lists.h"

/**
 * print_listint - prints all element in listint_t
 * @h: pointer to element
 * Return: elements in listint_t
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *present = tail->next;
	size_t count = 0;

	while (present != tail)
	{
		count++;
		present = present->next;
	}
	count++;
	return (count);
}
