#include "lists.h"
/* header */

/**
* listint_len -  returns the number of elements in a linked listint_t list.
* @h: pointer to a const listint_t
* Return: 0 if success
*/

size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		x++;
		h = h->next;
	}
	return (x);
}
