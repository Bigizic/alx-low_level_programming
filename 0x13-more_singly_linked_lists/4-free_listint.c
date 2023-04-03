#include "lists.h"
/* header */

/**
* free_listint - frees a listint_t list
* @head: pointer to listint_t
* Return: 0 if success
*/

void free_listint(listint_t *head)
{
	listint_t *current_node, *next_node;

	current_node = head;

	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}
}
