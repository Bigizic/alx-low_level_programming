#include "lists.h"
/* header */

/**
* sum_listint - returns the sum of all the data (n) of a listint_t linked list.
* @head: pointer to listint_t
* Return: 0 if success
*/

int sum_listint(listint_t *head)
{
	listint_t *sum;
	int x = 0;

	sum = head;
	if (head == NULL)
	{
		return (0);
	}
	while (sum != NULL)
	{
		x += sum->n;
		sum = sum->next;
	}
	return (x);
}

