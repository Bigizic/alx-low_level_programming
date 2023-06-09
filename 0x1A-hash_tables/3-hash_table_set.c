#include "hash_tables.h"
/* header */

/**
 * hash_table_set - a function that adds an element to the hash table
 *
 * @ht: struct to the table
 *
 * @key: key (char) type
 *
 * @value: value associated with the key, Can be an empty string
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_element;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	/* create a new element or node, also create memory for it */
	new_element = malloc(sizeof(hash_node_t));
	if (new_element == NULL)
		return (0);

	new_element->key = strdup(key);
	new_element->value = strdup(value);
	new_element->next = NULL;

	if (new_element->key == NULL || (new_element->value == NULL
				&& *value != '\0'))
	{
		free(new_element->key);
		free(new_element->value);
		free(new_element);
		return (0);
	}

	/* check if the index is already occupied */
	if (ht->array[index] != NULL)
	{
		/* Add the new_element to the beginning of the list */
		new_element->next = ht->array[index];
		ht->array[index] = new_element;
	}

	/* no collision, set new_element as first node */
	ht->array[index] = new_element;

	return (1);
}

