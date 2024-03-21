#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list.
 * @head: A pointer to the head of the list.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = NULL;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
