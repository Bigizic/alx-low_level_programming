#include "lists.h"
/* header */

/**
* free_listint_safe - frees a listint_t list.
* @h: pointer to a pointer that points to a listint_t struct
* Return: 0 if success
*/

size_t free_listint_safe(listint_t **h)
{
	listint_t *current_node, *next_node;
	size_t count = 0;

	current_node = *h;
	next_node = (*h)->next;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}

	while (current_node != NULL)
	{

		if (current_node <= next_node)
		{
			free(current_node);
			count++;
			current_node = next_node;
			next_node = next_node != NULL ? next_node->next : NULL;
		}
		else
		{
			free(current_node);
			count++;
			break;
		}
	}

	*h = NULL;
	return (count);
}
