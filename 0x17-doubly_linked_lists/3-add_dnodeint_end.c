#include "lists.h"
/* header */

/**
* add_dnodeint_end - a function that adds a new node at the
* end of a dlistint_t list.
*
* @head: double pointer to the head of the list
*
* @n: new node to add at the end of the list
*
* Return: the address of the new element, or NULL if it failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current_node, *new_node;

	current_node = *head;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*head == NULL)
		*head = new_node;
	else
	{
		while (current_node->next != NULL)
			current_node = current_node->next;
		new_node->next = NULL;
		new_node->prev = current_node;
		current_node->next = new_node;
	}
	return (new_node);
}
