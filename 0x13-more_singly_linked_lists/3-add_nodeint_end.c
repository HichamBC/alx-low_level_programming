#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a singly linked list.
 * @head: double pointer to the singly list.
 * @n: integer value that will be stored in the new node.
 *
 * Return: the address of the newly added node if successful, otherwise NULL.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = NULL;
	listint_t *current = NULL;

	if (head != NULL)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		new_node->next = NULL;

		if (*head == NULL)
		{
			*head = new_node;
		}
		else
		{
			current = *head;
			while (current->next != NULL)
			{
				current = current->next;
			}

			current->next = new_node;
		}
	}

	return (new_node);
}
