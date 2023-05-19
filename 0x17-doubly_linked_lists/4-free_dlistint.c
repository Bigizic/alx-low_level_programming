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

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			head_copy = head->next;
			free(head);
			head = head_copy;
		}
	}

}
