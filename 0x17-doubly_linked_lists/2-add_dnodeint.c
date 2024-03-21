#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a doubly linked list.
 * @head: A pointer to a pointer to the head of the doubly linked list.
 * @n: The integer value to be stored in the new node.
 *
 * Return: A pointer to the newly added node, or NULL.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);

	temp->prev = NULL;
	temp->n = n;
	temp->next = *head;
	if (*head != NULL)
		(*head)->prev = temp;
	*head = temp;

	return (*head);
}
