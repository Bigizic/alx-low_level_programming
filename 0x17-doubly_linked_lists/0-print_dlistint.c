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
	const dlistint_t *current;
	unsigned int i = 0;

	current = h;

	while (current != NULL)
	{
		printf("%i\n", current->n);
		current = current->next;
		i++;
	}
	return (i);
}
