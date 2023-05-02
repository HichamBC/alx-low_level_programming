#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a linked list.
 * @head: pointer to the head of the list.
 *
 * Return: None.
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
