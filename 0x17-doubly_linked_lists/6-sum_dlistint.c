#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - Calculates the sum of all the data n of a doubly linked list.
 *
 * @head: A pointer to the head of the doubly linked list.
 *
 * Return: The sum of all the data n stored in the nodes of the list,
 *         or 0 if the list is empty.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int sum = 0;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
