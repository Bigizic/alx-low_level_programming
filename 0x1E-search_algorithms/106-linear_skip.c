#include "search_algos.h"
/* header */


/**
 * linear_skip - a function that searches for a value in a sorted
 * skip list of inegers
 *
 * @list: pointer to the head of the skip list to search in
 *
 * @value: target
 *
 * Return: pointer on the first node where value is located
 * otherwise -1
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *curr, *jp, *temp;
	char *val, *fou;

	if (list == NULL)
		return (NULL);
	curr = list;
	val = "Value checked at index ", fou = "Value found between indexes ";
	while (curr)
	{
		jp = curr->express;
		if (jp != NULL)
		{
			printf("%s[%lu] = [%d]\n", val, jp->index, jp->n);
			if (jp->n >= value)
			{ printf("%s[%lu] and [%lu]\n", fou, curr->index, jp->index);
				break; }
			curr = jp;
			temp = jp;
		}
		else
		{
			while (curr->next)
				curr = curr->next;
			printf("%s[%lu] and [%lu]\n", fou, temp->index, curr->index);
			break;
		}
	}
	while (temp && temp->index < curr->index)
	{
		printf("%s[%lu] = [%d]\n", val, temp->index, temp->n);
		temp = temp->next;
	}
	while (curr)
	{
		printf("%s[%lu] = [%d]\n", val, curr->index, curr->n);
		if (curr->n == value)
			return (curr);
		curr = curr->next;
	}
	return (NULL);
}
