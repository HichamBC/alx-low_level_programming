#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: double pointer to the head of a linked list.
 * @str: string to be duplicated.
 *
 * Return: the address of the new node, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int count = 0;
	list_t *end_node = NULL;
	list_t *current = NULL;

	if (str == NULL)
		return (NULL);

	end_node = malloc(sizeof(list_t));
	if (end_node != NULL)
	{
		end_node->str = strdup(str);
		if (end_node->str == NULL)
		{
			free(end_node);
			return (NULL);
		}

		while (*str != '\0')
		{
			count += 1;
			str++;
		}

		end_node->len = count;
		end_node->next = NULL;

		if (*head == NULL)
			*head = end_node;
		else
		{
			current = *head;
			while (current->next != NULL)
				current = current->next;

			current->next = end_node;
		}
	}

	return (end_node);
}
