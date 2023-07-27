#include <stdlib.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: double pointer to the head of the linked list.
 * @str: string to be duplicated.
 *
 * Return: pointer to the head (new_node) of the linked list or NULL.
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int count = 0;
	list_t *new_node = NULL;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node != NULL)
	{
		new_node->str = strdup(str);
		if (new_node->str == NULL)
		{
			free(new_node);
			return (NULL);
		}

		while (*str != '\0')
		{
			count += 1;
			str++;
		}

		new_node->len = count;
		new_node->next = *head;
		*head = new_node;
	}

	return (new_node);
}
