#include "lists.h"
/**
 * free_list - fun free list
 * @head: pointer to the first node
 * Return: 0
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
