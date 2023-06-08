#include "hash_tables.h"
/* header */

/**
 * key_index -  a function that gives you the index of a key in a hash
 * table
 *
 * @key: key
 *
 * @size: size of the array of the hash table
 *
 * Description: The number 31 is commonly used in hashing algorithms
 * because it's a prime number. Multiplying the hash value by 31 is a
 * simple and efficient way to combine the accumulated hash value with
 * the next character of the key
 *
 * Return: index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i = 0;
	unsigned long int index_count = 0;

	i = hash_djb2(key);

	index_count = i % size;

	return (index_count);
}
