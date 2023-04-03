#include "lists.h"
/* header */

/**
* *insert_nodeint_at_index - inserts a new node at a given position.
* @head: pointer to a pointer that points to listint_t
* @idx: unsigned int type
* @n: int type
* Return: 0 if success
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current_node;
	unsigned int count = 0;

	new_node = malloc(sizeof(listint_t));

	if (*head == NULL)
	{
		return (NULL);
	}

	if (idx == 0)
	{
		return (add_nodeint_end(head, n));
	}
	current_node = *head;
	for (count = 0; count < idx - 1; count++)
	{
		if (current_node == NULL || current_node->next == NULL)
		{
			return (NULL);
			current_node = current_node->next;
		}
	}
		
	if (new_node == NULL)

		return (NULL);

	new_node->n = n;
	new_node->next = current_node->next;
	current_node->next = new_node;
	return (new_node);
}
