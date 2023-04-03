#include "lists.h"
/* header */

/**
* pop_listint -  deletes the head node of a listint_t
* @head: pointer to a pointer that points to listint_t
* Return: 0 if success
*/

int pop_listint(listint_t **head)
{
	listint_t *x;
	int i;

	if (*head == NULL)
	{
		return (0);
	}

	x = *head;
	*head = (*head)->next;
	i = x->n;
	free(x);

	return (i);
}
