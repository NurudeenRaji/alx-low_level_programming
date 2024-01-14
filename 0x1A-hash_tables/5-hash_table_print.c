#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, size;
	hash_node_t *node;

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
				printf(", ");
			node = node->next;
		}
	}
	printf("}\n");
}
