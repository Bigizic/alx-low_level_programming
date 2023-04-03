#include "lists.h"
/* header */

/**
* print_listint - prints all the elements of a listint_t list.
* @h: pointer to a const listint_t struct
* Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		if (h != NULL)
		{
			printf("%d\n", h->n);
		}
		x++;
		h = h->next;
	}
	return (x);
}
