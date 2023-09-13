#include "search_algos.h"
#include <math.h>
/* header */


/**
 * jump_list - implementation of the jump search algorithm using
 * single linked list
 *
 * @list: (listint_t) pointer to head of the list
 *
 * @size: size of the list
 *
 * @value: target
 *
 * Return: pointer to target otherwise NULL
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *curr, *temp;
	size_t sq, i;

	if (list == NULL || size == 0)
		return (NULL);

	sq = sqrt(size);
	curr = list;
	temp = NULL;

	while (curr->index < size - 1 && curr->n < value)
	{
		temp = curr;
		for (i = 0; i < sq && curr->next; i++)
			curr = curr->next;
		printf("Value checked at index [%lu] = [%d]\n",
				curr->index, curr->n);
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
			temp->index, curr->index);

	while (temp->index < curr->index)
	{
		printf("Value checked at index [%lu] = [%d]\n",
				temp->index, temp->n);
		if (temp->n == value)
			return (temp);
		temp = temp->next;
	}
	printf("Value checked at index [%lu] = [%d]\n",
			temp->index, temp->n);
	return (NULL);
}
