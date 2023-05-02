#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list.
 * @head: pointer to the head of the list.
 * @index: the index of the returned node.
 *
 * Return: NULL or the nth node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *ptr = head;

	while (ptr != NULL && i < index)
	{
		ptr = ptr->next;
		i++;
	}

	if (ptr == NULL ||  i != index)
	{
		return (NULL);
	}

	return (ptr);
}
