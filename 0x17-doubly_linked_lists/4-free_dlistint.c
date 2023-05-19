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
	dlistint_t *head_copy, *next_node;

	head_copy = head;
	while (head_copy != NULL)
	{
		next_node = head_copy->next;
		free(head_copy);
		head_copy = next_node;
	}
}
