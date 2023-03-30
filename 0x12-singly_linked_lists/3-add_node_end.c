#include "lists.h"
/* header */

/**
* add_node_end -  adds a new node at the end of a list_t list
* @head: pointer to a pointer that points to list_t
* @str: const char
* Return: 0 if success
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		last_node = *head;
		while (last_node->next)
			last_node = last_node->next;
		last_node->next = new_node;
	}
	return (new_node);
}

