#include "lists.h"
/* header */

/**
* print_listint_safe - prints a listint_t linked list.
* @head: pointer to a listint_t
* Return: 0 if success
*/

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current_node, *next_node;
	const listint_t *all_node[1024];
	size_t count = 0;
	size_t i;

	current_node = head;

	while (current_node != NULL)
	{
		for (i = 0; i < count; i++)
		{
			if (all_node[i] == current_node)
			{
				printf("-> [%p] %d\n", (void *)current_node, current_node->n);
				return (count);
			}
		}

		all_node[count] = current_node;
		count++;

		printf("[%p] %d\n", (void *)current_node, current_node->n);

		next_node = current_node->next;
		current_node = next_node;
	}
	return (count);
	exit(98);
}
