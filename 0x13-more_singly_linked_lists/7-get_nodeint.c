#include "lists.h"
/* header */

/**
* *get_nodeint_at_index - returns the nth node of a listint_t linked list.
* @head: pointer to a listint_t
* @index: unsigned int type
* Return: 0 if success
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *c;
	unsigned int main_index = 0;

	c = head;

	while (c != NULL)
	{
		if (main_index == index)
		{
			return (c);
		}
		main_index++;
		c = c->next;
	}
	return (NULL);
}
