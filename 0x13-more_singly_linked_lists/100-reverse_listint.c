#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: pointer to a pointer to the head of the list.
 *
 * Return: pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prv = NULL;
	listint_t *current = *head;

	while (current != NULL)
	{
		*head = (*head)->next;
		current->next = prv;
		prv = current;
		current = *head;
	}

	*head = prv;

	return (*head);
}
