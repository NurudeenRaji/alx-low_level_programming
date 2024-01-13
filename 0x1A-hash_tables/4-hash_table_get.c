#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value with a key
 * @ht: the hash table to retrieve a value from.
 * @key: the key of the hash table.
 * Return: NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int size;
	int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL)
		return (NULL);
	size = ht->size;
	index = key_index((const unsigned char *)key, size);

	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
