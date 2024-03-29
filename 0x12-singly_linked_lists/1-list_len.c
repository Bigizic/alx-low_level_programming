#include "lists.h"
/* header */

/**
* list_len - returns the number of elements in a linked list_t list
* @h: pointer to list_t
* Return: 0 if success
*/
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
