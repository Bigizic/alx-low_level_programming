#include "lists.h"
/* header */

/**
* add_dnodeint - a function that adds a new node at the beginning
* of a dlistint_t list
*
* @head: pointer to a pointer to teh beginning of the list
*
* @n: new node to add
*
* Return: the address of the new element or NULL if it fails
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;
	return (*head);
}
