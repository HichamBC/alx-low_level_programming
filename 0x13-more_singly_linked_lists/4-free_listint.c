#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees memory used by a singly linked list of type listint_t.
 * @head: pointer to the head of the listint_t linked list.
 *
 * Return: None.
 */

void free_listint(listint_t *head)
{
	listint_t *current = NULL;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
