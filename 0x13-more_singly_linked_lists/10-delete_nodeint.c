#include "lists.h"
/* header */

/**
* delete_nodeint_at_index -  deletes the node at index index of 
* a listint_t linked list.
* @head: pointer to a pointer that points to listint_t
* @index: unsigned int
* Reeturn: 0 if success
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node, *prev_node;
	current_node = *head;

	int len = countNodes(*head);
	unsigned int count = 0;

	if (*head == NULL)
	{
		return (NULL);
	}

	if (index >= len)
	{
		return (-1);
	}

	while (current_node != NULL)
	{
		count++;
		prev_node = current_node;
		current_node = current_node->next;
		free(current_ndoe);
	}
	return (count);

	return (1);
}
