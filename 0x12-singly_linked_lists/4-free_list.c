#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: pointer to the first node of a linked list.
 *
 * Return: None.
 */

void free_list(list_t *head)
{
	list_t *current = NULL;
	list_t *ptr = NULL;

	current = head;
	while (current != NULL)
	{
		ptr = current->next;
		free(current->str);
		free(current);
		current = ptr;
	}
}
