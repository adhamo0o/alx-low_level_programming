#include "lists.h"
/**
 * free_list - fun free list
 * @head: pointer to the first node
 * Return: 0
 */
void free_list(list_t *head)
{
	free(head);
}
