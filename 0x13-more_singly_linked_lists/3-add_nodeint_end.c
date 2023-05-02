#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked list.
 * @head: pointer to a pointer to the head of the list.
 * @n: integer value.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node, *ptr;

	end_node = malloc(sizeof(listint_t));
	if (end_node == NULL)
		return (NULL);
	end_node->n = n;
	end_node->next = NULL;

	if (*head == NULL)
	{
		*head = end_node;
		return (end_node);
	}

	ptr = *head;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}

	ptr->next = end_node;
	return (end_node);
}
