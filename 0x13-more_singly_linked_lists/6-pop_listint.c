#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list.
 * @head: pointer of a pointer to the head of the linked list.
 *
 * Return: 0 or the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *ptr;

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	ptr = *head;
	*head = (*head)->next;
	free(ptr);

	return (data);
}
