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

	unsigned int len = count_nodes(*head);
	unsigned int count = 0;
	current_node = *head, prev_node = NULL;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index >= len)
	{
		return (-1);
	}

	while (current_node != NULL)
	{
		if (count == index)
		{
			if (prev_node == NULL)
			{
				*head = current_node->next;
			}
			else
			{
				prev_node->next = current_node->next;
			}
			free(current_node);
			return (1);
		}
		prev_node = current_node;
		current_node = current_node->next;
		count++;
	}
	return (-1);
}
