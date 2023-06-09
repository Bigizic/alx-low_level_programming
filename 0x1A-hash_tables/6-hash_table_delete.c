#include "hash_tables.h"
/* header */

/**
 * hash_table_delete - a function that deletes a hash table
 *
 * @ht: hash table
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i, size;
	hash_node_t *current, *next;

	if (ht == NULL)
		return;

	size = ht->size;
	for (i = 0; i < size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			next = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = next;
		}
	}
	free(ht->array);
	free(ht);
}
