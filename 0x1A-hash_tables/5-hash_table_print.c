#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, size;
	hash_node_t *node;
	bool pair;

	pair = false;
	if (ht == NULL)
		return;
	printf("{");
	size = ht->size;

	for (i = 0; i < size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (pair == true)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			pair = true;
			node = node->next;
		}
	}
	printf("}\n");
}
