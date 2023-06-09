#include "hash_tables.h"
/* header */

/**
 * hash_table_get -  a function that retrieves a value associated with a
 * key
 *
 * @ht: table to look
 *
 * @key: key to search for
 *
 * Return: key value otherwise NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current_node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	current_node = ht->array[index];
	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
			/* return Value */
			return (current_node->value);

		current_node = current_node->next;
	}
	/* Otherwise return NULL */
	return (NULL);
}
