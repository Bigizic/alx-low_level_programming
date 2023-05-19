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
	dlistint_t *head_copy = head;
	unsigned int count = 0;

	while (head_copy != NULL)
	{
		if (count == index)
		{
			return (head_copy);
		}
		head_copy = head_copy->next;
		count++;
	}

	return (NULL);
}
