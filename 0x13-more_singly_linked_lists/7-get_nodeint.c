#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node
 * @head: pointer tio the first node
 * @index: index of the node
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *node = head;

	for (i = 0; node != NULL; i++)
	{
		if(i == index)
			return (node);
		node = node->next;
	}
	return 	(NULL);
}
