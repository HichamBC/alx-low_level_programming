#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to pointer to the first node of a linked list.
 * @str: string.
 *
 * Return: pointer to the new element or NULL.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = NULL;
	list_t *end_node = NULL;

	if (head == NULL)
		return (0);

	end_node = malloc(sizeof(list_t));
	if (end_node == NULL)
		return (0);

	end_node->str = strdup(str);
	if (end_node->str == NULL)
	{
		free(end_node);
		return (0);
	}

	end_node->len = 0;
	while (*str)
	{
		end_node->len += 1;
		str++;
	}
	end_node->next = NULL;

	if (*head == NULL)
		*head = end_node;
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
			ptr = ptr->next;

		ptr->next = end_node;
	}
	return (end_node);
}
