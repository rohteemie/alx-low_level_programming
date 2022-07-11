#include "lists.h"

/**
 * dlistint_len - return length of linkedlist
 * @h: doubly linkedlist
 * Return: number of elements in a linked dlistint_t list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != 0)
	{
		h = h->next;
		count += 1;
	}
	return (count);
}
