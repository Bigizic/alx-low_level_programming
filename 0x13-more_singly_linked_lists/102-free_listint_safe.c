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

	while (*h != NULL)
	{
		current_node = *h;
		next_node = NULL;
		*h = (*h)->next;

		if (current_node <= next_node)
		{
			free(current_node);
			count++;
		}
		else
		{
			free(current_node);
			count++;
			break;
		}
	}

	return (count);
}
