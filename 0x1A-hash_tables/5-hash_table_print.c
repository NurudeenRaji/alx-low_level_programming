#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, size;
	hash_node_t *node;
	int comma;

	comma = 0;
	printf("{");
	if (ht == NULL)
		return;
	size = ht->size;

	for (i = 0; i < size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			printf("'%s': '%s'", node->key, node->value);
			if (node->next != NULL || i < size - 1)
			{
				printf(", ");
				comma = 1;
			}
			node = node->next;
		}
	}
	if (comma)
		printf("\b\b");
	printf("}\n");
}
