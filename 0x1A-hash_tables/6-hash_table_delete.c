#include "hash_tables.h"

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i, size;
	hash_node_t *node, *temp;

	if (ht == NULL)
		return;
	size = ht->size;
	for (i = 0; i < (size - 1); i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			temp = node;
			node = node->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
