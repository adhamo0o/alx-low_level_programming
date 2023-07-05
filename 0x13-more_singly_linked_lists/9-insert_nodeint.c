#include "lists.h"
/**
 * insert_nodeint_at_index - function insert node at a given position
 * @head: pointer to the first node
 * @idx: the index
 * @n: number
 * Return: the address
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *ptr;
	unsigned int i;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	ptr = *head;

	for (i = 0; i < idx - 1 && ptr != NULL; i++)
		ptr = ptr->next;

	if (ptr == NULL)
	{
		free(node);
		return (NULL);
	}

	node->next = ptr->next;
	ptr->next = node;

	return (node);
}
