#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - calculates sum of all the data (n) in a listint_t linked list.
 * @head: pointer to the head of the listint_t linked list.
 *
 * Return: the sum of all the data (n) in the linked list.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
