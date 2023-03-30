#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/* header */

/**
* print_list - prints all the elements of a list_t list
* @h: pointer to list_t
* Return: 0 if success
*/

size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}

		count++;
		h = h->next;
	}
	return (count);
}

