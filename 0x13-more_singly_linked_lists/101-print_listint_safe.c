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
	size_t count = 0;

	current_node = head;

	while (current_node != NULL)
	{
		count++;
		printf("[%p] %d\n", (void *)current_node, current_node->n);
		next_node = current_node->next;

		if (next_node == NULL || next_node >= current_node)
			break;

		current_node = next_node;

		if (current_node != NULL && next_node != NULL)
		{
			count++;

			printf("[%p] %d\n", (void *)current_node, current_node->n);

			printf("-> [%p] %d\n", (void *)next_node, next_node->n);

		}

	}
	exit(98);
	return (count);
}
