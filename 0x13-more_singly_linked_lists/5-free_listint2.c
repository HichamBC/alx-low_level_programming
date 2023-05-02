#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a liked list and sets the head to NULL.
 * @head: pointer to a pointer to the head of the list.
 *
 * Return: None.
 */

void free_listint2(listint_t **head)
{
	listint_t *current, *ptr;

	if (head == NULL)
		return;

	current = *head;

	while (current != NULL)
	{
		ptr = current->next;

		free(current);
		current = ptr;
	}

	*head = NULL;
}
