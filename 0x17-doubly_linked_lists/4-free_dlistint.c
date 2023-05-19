#include "lists.h"
/* header */

/**
* free_dlistint - a function that frees a dlistint_t list
*
* @head: pointer to list to free
*
* Return: void
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *head_copy;

	while (head != NULL)
	{
		head_copy = head;
		head = head->next;
		free(head_copy);
	}
}
