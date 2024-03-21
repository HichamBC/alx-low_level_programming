#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node with a given value at the end of a
 *                    doubly linked list.
 * @head: A pointer to a pointer to the head of the doubly linked list.
 * @n: The integer value to be stored in the new node.
 *
 * Return: A pointer to the newly added node, or NULL.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *ptr;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);

	temp->next = NULL;
	temp->n = n;

	if (*head == NULL)
	{
		temp->prev = NULL;
		*head = temp;
		return (*head);
	}

	ptr = *head;
	while (ptr->next != NULL)
		ptr = ptr->next;

	ptr->next = temp;
	temp->prev = ptr;

	return (*head);
}
