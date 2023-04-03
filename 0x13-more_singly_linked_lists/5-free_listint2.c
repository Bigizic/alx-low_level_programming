#include "lists.h"
/* header */

/**
* free_listint2 -  frees a listint_t list
* @head: pointer to a pointer that points to listint_t
* Return: 0 if success
*/

void free_listint2(listint_t **head)
{
	listint_t *current_node, *next_node;

	current_node = *head;

	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}
	if (*head != NULL)
	{
		*head = NULL;
	}
}
