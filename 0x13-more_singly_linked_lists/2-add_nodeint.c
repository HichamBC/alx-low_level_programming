#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a linked list.
 * @head: A pointer to a pointer to the head of the list.
 * @n: integer value.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *beg_node;

	if (head == NULL)
	{
		return (NULL);
	}

	beg_node = malloc(sizeof(listint_t));
	if (beg_node == NULL)
	{
		return (NULL);
	}

	beg_node->n = n;
	beg_node->next = *head;
	*head = beg_node;

	return (beg_node);
}
