#include "lists.h"
/* header */

/**
* sum_dlistint - a function that returns the sum of all the data
* (n) of a dlistint_t linked list
*
* @head: list
*
* Return: summed data
*/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *head_copy = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head_copy != NULL)
	{
		sum += head_copy->n;
		head_copy = head_copy->next;
	}
	return (sum);
}
