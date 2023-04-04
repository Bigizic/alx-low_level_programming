#include "lists.h"
/* header */

/**
* print_listint_safe - prints a listint_t linked list.
* @head: pointer to a listint_t
* Return: 0 if success
*/

size_t print_listint_safe(const listint_t *head)
{
	listint_t *current_node, *next_node;
	size_t count = 0;

	current_node = (listint_t *)head;

	while (current_node != NULL)
	{
		printf("[%p] %d\n", (void *)current_node, current_node->n);
		count++;
		next_node = current_node->next;

		if (next_node <= current_node)
		{
			printf("-> [%p] %d\n", (void *)next_node, next_node->n);
				exit(98);
		}
		current_node = next_node;
	}
	return (count);
}
