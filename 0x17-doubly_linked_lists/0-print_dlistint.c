#include "lists.h"
/* header */

/**
* print_dlistint - a function that prints all the elements
* of a dlistint_t list
*
* @h: pointer to header of double linked list
*
* Return: the number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	unsigned int i = 0;
	int x = 0;
	const dlistint_t *current = h;

	for (i = 0; current != NULL; i++)
	{
		if (current->prev != NULL && x == 0)
		{
			current = current->prev;
			continue;
		}
		else if (current->prev == NULL)
		{
			x = 1;
			i = 0;
		}
		printf("%i\n", current->n);
		current = current->next;
	}
	return (i);
}
