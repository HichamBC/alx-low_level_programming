#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: linked list.
 *
 * Return: None.
 */

void free_list(list_t *head)
{
	list_t *ptr = NULL;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr->str);
		free(ptr);
	}
}
