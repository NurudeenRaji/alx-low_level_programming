#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i, size;
	hash_node_t *node, *temp;

	if (ht == NULL)
		return;
	size = ht->size;
	for (i = 0; i < size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			temp = node;
			node = node->next;
			if (temp->key != NULL)
			{
				free(temp->key);
				temp->key = NULL;
			}
			if (temp->value != NULL)
			{
				free(temp->value);
				temp->value = NULL;
			}
			free(temp);
			temp = NULL;
		}
	}
	if (ht->array != NULL)
	{
		free(ht->array);
		ht->array = NULL;
	}
	free(ht);
	ht = NULL;
}
