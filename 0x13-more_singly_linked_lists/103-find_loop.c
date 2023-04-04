#include "lists.h"
/* header */

/**
* *find_listint_loop - finds the loop in a linked list
* @head: pointer to a listint_t struct
* Return: 0 if success
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_node, *fast_node;

	slow_node = head;
	fast_node = head;

	while (slow_node && fast_node && fast_node->next)
	{
		slow_node = slow_node->next;
		fast_node = fast_node->next->next;

		if (slow_node == fast_node)
		{
			slow_node = head;

		while (slow_node != fast_node)
		{
			slow_node = slow_node->next;
			fast_node = fast_node->next;
		}
		return (slow_node);
		}
	}
	return (NULL);
}

