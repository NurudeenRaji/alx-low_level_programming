#include "hash_tables.h"

hash_node_t *create_node(const char *key, const char *value);

/**
 * hash_table_set - the hash table.
 * @ht: the hast table to add or update to.
 * @key: the key containing the element to add.
 * @value: the value associated with the key.
 * Return: 1 (Success), 0 (fail).
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int size;
	int index;
	hash_node_t *current_item;
	hash_node_t *node;

	size = ht->size;
	index = key_index((const unsigned char *)key, size);
	current_item = ht->array[index];

	if (current_item == NULL)
	{
		node = create_node(key, value);
		if (node == NULL)
			return (0);
		ht->array[index] = node;
	}
	else
	{
		if (strcmp(current_item->key, key) == 0)
		{
			free(current_item->value);
			current_item->value = malloc(strlen(value) + 1);
			if (current_item->value == NULL)
				return (0);
			strcpy(current_item->value, value);
		}
		else
		{
			node = create_node(key, value);
			if (node == NULL)
				return (0);
			node->next = current_item;
			ht->array[index] = node;
		}
	}
	return (1);
}

hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));
	node->key = malloc(strlen(key) + 1);
	node->value = malloc(strlen(value) + 1);
	strcpy(node->key, key);
	strcpy(node->value, value);

	return (node);
}
