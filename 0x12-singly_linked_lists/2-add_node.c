#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: a pointer to a pointer to the 1st node of a linked list.
 * @str: string.
 *
 * Return: pointer to the new element or NULL.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *beg_node = NULL;

	if (head == NULL)
		return (0);

	beg_node = malloc(sizeof(list_t));
	if (beg_node == NULL)
		return (0);

	beg_node->str = strdup(str);
	if (beg_node->str == NULL)
	{
		free(beg_node);
		return (0);
	}

	beg_node->len = 0;
	while (*str)
	{
		beg_node->len += 1;
		str++;
	}
	beg_node->next = *head;
	*head = beg_node;

	return (*head);
}
