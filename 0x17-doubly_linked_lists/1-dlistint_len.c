#include "lists.h"
/* header */

/**
* dlistint_len - a function that returns the number of elements
* in a linked dlistint_t list
*
* @h: pointer to beginning of double list
*
* Return: number of elements in a linked list
*/

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t i = 0;

	current = h;

	while (current != NULL)
	{
		current = current->next;
		i++;
	}
	return (i);
}
