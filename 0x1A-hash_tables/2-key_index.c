#include "hash_tables.h"

/**
 * key_index - hash function to prodeuce the index
 * @key: the key stored at the index.
 * @size: size of the array.
 * Return: the index where the key will be stored.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);
	unsigned long int index = hash_value % size;

	return (index);
}
