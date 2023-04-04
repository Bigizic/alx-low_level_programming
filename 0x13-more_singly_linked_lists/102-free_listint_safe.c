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

	if (h == NULL || *h == NULL)
	{
		return (0);
	}

	while (*h != NULL)
	{
		current_node = *h;
		next_node = current_node->next;
		free(current_node);
		count++;

		if (next_node >= current_node)
		{
			*h = next_node;
		}
		else
		{
			break;
		}
	}

	*h = NULL;
	return (count);
}
