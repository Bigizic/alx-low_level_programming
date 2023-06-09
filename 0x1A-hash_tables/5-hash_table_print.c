#include "hash_tables.h"
/* header */

/**
* hash_table_print - a function that prints a hash table
*
* @ht: struct of the table
*
* Return: void
*/

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int i;
	unsigned long int size;

	if (ht == NULL)
		return;

	size = ht->size;
	printf("{");
	for (i = 0; i < size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			printf("'%s': '%s', ", current->key, current->value);
			current = current->next;
		}
	}

	printf("}\n");
}
