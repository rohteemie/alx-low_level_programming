#include "lists.h"

/**
 * dlistint_len - return length of linkedlist
 * @h: doubly linkedlist
 * Return: number of elements in a linked dlistint_t list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count += 0;
	}
	return (count);
}
