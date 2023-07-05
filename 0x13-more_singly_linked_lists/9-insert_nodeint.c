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

	if (*head == NULL)
		return (NULL);
	ptr = *head;

	for (n = 0; ptr != NULL; n++)
	{
		if (n == idx)
		{
			
		
		}
	
	}
}
