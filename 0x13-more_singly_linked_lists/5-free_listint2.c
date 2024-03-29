#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees the memory used by a singly listint_t linked list .
 * @head: double pointer to the listint_t linked list.
 *
 * Return: None.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp = NULL;

	if (head == NULL || *head == NULL)
		return;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
