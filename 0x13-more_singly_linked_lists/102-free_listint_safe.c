#include "lists.h"
/* header */

/**
* free_listint_safe - frees a listint_t list.
* @h: pointer to a pointer that points to a listint_t struct
* Return: 0 if success
*/

size_t free_listint_safe(listint_t **h)
{
	listint_t *current_node;
	size_t count = 0;
	int i;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}

	while (*h)
	{
		i = *h - (*h)->next;
		if (i > 0)
		{
			current_node = (*h)->next;
			free(*h);
			*h = current_node;
			count++;
		}
		else
		{
			free(*h);
			*h = NULL;
			count++;
break;
		}
	}
	*h = NULL;
	return (count);
}
