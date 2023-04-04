#include "lists.h"
/* header */

/**
* *reverse_listint -  reverses a listint_t linked list.
* @head: pointer to a pointer that points to listint_t
* Return: 0 if success
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node, *current_node, *next_node;
	unsigned int count;

	current_node = *head;
	next_node = NULL;

	if (*head == NULL)
	{
		return (NULL);
	}

	while (current_node != NULL)
	{
		next_node = current_node->next;
		current_node->next = prev_node;
		prev_node = current_node;
		current_node = next_node;
		count++;
	}
	*head = prev_node;
	return (current_node)
}
