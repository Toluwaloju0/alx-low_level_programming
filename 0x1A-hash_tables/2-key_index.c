#include "hash_tables.h"

/**
 * key_index - to get the index of a key
 * @key: the key to be used
 * @size: the size of the array
 * Return: the index at which the key/value pair should be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)

{
	unsigned long int a = hash_djb2(key);

	return (a % size);
}
