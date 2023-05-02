#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to a pointer to the head of linked list.
 * @idx: index of the list where the new node should be added.
 * @n: integer value.
 *
 * Return: the address of the new node, or NULL.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *idx_node, *ptr;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	idx_node = malloc(sizeof(listint_t));
	if (idx_node == NULL)
		return (NULL);

	idx_node->n = n;

	if (idx == 0)
	{
		idx_node->next = *head;
		*head = idx_node;
		return (idx_node);
	}

	ptr = *head;
	while (ptr != NULL && i < idx - 1)
	{
		ptr = ptr->next;
		i++;
	}

	if (ptr == NULL)
		return (NULL);

	idx_node->next = ptr->next;
	ptr->next = idx_node;

	return (idx_node);
}
