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
	size_t i;

	current_node = *h;

	while (current_node != NULL)
	{
		for (i = 0; i < count; i++)
		{
			next_node = current_node->next;
			free(current_node);
			count++;
			current_node = next_node;
		}
	}
	*h = NULL;

	return (count);
}
