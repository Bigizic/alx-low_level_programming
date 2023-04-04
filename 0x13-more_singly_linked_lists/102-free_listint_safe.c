#include "lists.h"
/* header */

/**
* free_listint_safe - frees a listint_t list.
* @h: pointer to a pointer that points to a listint_t struct
* Return: 0 if success
*/

size_t free_listint_safe(listint_t **h)
{
	listint_t *current_node = *h, *next_node = *h;
	size_t count = 0;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}

	while (next_node && next_node->next)
	{
		count++;
		current_node = current_node->next;
		next_node = next_node->next->next;

		if (current_node == next_node)
		{
			count = 0;
			while (*h)
			{
				if (*h == next_node)
				{
					*h = NULL;
					return (count);
				}
				count++;
				next_node = next_node->next;
				free(current_node);
				current_node = *h;
				while (current_node != next_node)
				{
					count++;
					current_node = current_node->next;
					free(*h);
					*h = (*h)->next;
				}
			}
		}
	}
	while (*h)
	{
		count++;
		next_node = (*h)->next;
		free(*h);
		*h = next_node;
	}
	return (count);
}
