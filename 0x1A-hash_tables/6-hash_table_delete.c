#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: The hash table to delete
 *
 * Return: None
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *ptr;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			ptr = node;
			node = node->next;
			free(ptr->key);
			free(ptr->value);
			free(ptr);
		}
	}

	free(ht->array);
	free(ht);
}
