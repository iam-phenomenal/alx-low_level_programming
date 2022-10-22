#include "lists.h"
#include <stdio.h>

/**
 * print_list- Entry
 * @h: The list_t list.
 * Description: Print all elements of list
 * Return: The number of nodes in h.
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		nodes++;
		h = h->next;
	}

	return (nodes);
}