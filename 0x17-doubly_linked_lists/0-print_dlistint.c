#include "lists.h"
#include <stdlib.h>

/**
 * print_dlistint - prints the elements of a dlistint_t
 * @h: function param/variable of a user define dataType
 * Return: numbers of node
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
