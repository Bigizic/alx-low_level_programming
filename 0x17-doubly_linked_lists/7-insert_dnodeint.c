#include "lists.h"
/* header */

dlistint_t *extra_check(dlistint_t *head_copy, unsigned int count, unsigned int idx, dlistint_t *new_node);

/**
* insert_dnodeint_at_index - a function that inserts a new node
* at a given position
*
* @h: pointer to pointer to beginning of the list
*
* @idx: index to search
*
* @n: new node to insert
*
* Return: the address of the new node, or NULL if it failed
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *head_copy = *h, *new_node;
	unsigned int count = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (*h == NULL)
	{
		if (idx == 0)
		{
			new_node->prev = NULL;
			new_node->next = NULL;
			*h = new_node;
			return (new_node);
		}
		else
		{
			free(new_node);
			return (NULL);
		}
	}

	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	while(head_copy != NULL && count < idx)
	{
		head_copy = head_copy->next;
		count++;
	}
	return (extra_check(head_copy, count, idx, new_node));
}

/**
* extra_check - do something
*
* @head_copy: something
*
* @count: something
*
* @idx: something
*
* @new_node: something
*
* Return: something
*/
dlistint_t *extra_check(dlistint_t *head_copy, unsigned int count,
		unsigned int idx, dlistint_t *new_node)
{
	if (head_copy == NULL && count == idx - 1)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		return (new_node);
	}
	else if (head_copy != NULL && count == idx)
	{
		new_node->prev = head_copy->prev;
		new_node->next = head_copy;
		head_copy->prev->next = new_node;
		head_copy->prev = new_node;
		return (new_node);
	}
	else
	{
		free(new_node);
		return (NULL);
	}
}
