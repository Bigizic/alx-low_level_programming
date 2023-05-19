#include "lists.h"
/* header */

/**
* get_dnodeint_at_index - a function that returns the nth node
* of a dlistint_t linked list
*
* @head: pointer to the list
*
* @index: index to return
*
* Return: the node of index else NULL
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *head_copy = head, *new_node;
	unsigned int count = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	if (index == 0)
	{
		new_node->n = head_copy->n;
		return (new_node);
	}
	while (head_copy != NULL)
	{
		head_copy = head_copy->next;
		count++;
		if (index == count)
		{
			new_node->n = head_copy->n;
		}
	}
	if (index > count)
	{
		free(new_node);
		return (NULL);
	}
	return (new_node);
}
