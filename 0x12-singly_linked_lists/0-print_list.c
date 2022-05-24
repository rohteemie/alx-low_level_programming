#include "lists.h"

/**
 * print_list - This is a function that print all the element of a string.
 * @h: This is a pointer to the list.
 * Return: the number of the notes.
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	while (h)
	{
		if (h->str)
		{
			printf("[%u] %s\n", h->len, h->str);
		}

		else
		{
			printf("[0] (nil)\n");
		}

		count += 1;
		h = h->next;
	}

	return (count);
}
