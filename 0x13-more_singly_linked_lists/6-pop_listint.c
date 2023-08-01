#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a singly listint_t linked list.
 * @head: double pointer to the listint_t linked list.
 *
 * Return: data (n) of the deleted head node or 0 if the linked list is empty.
 */

int pop_listint(listint_t **head)
{

	listint_t *current = NULL;
	int num;

	if (head == NULL || *head == NULL)
		return (0);

	current = *head;
	num = current->n;
	*head = current->next;
	free(current);

	return (num);
}
