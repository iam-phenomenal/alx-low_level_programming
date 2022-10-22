#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Entry
 * @head: A pointer to the list_t list
 * Description: Free list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}