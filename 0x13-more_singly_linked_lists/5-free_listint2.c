#include "lists.h"
/**
 * free_listint2 - function frees the list
 * @head: pointer to the first node
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr, *next;

	if (head == NULL)
		return;

	ptr = *head;

	while (ptr != NULL)
	{
		next = ptr->next;
		free(ptr);
		ptr = next;
	}
	*head = NULL;
}
