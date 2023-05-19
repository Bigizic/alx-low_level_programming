#include "lists.h"
/* header */

/**
* delete_dnodeint_at_index -  a function that deletes the node
* at index index of a dlistint_t linked list
*
* @head: double pointer to the beginning of the list
*
* @index: index to delete
*
* Return: 1 if it succeeded, -1 if it failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *head_copy = *head;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = head_copy->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(head_copy);
		return (1);
	}
	while (head_copy != NULL && count < index)
	{
		head_copy = head_copy->next;
		count++;
	}
	if (head_copy == NULL)
		return (-1);
	head_copy->prev->next = head_copy->next;
	if (head_copy->next != NULL)
		head_copy->next->prev = head_copy->prev;
	free(head_copy);
	return (1);
}
