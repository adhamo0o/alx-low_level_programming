#include "lists.h"
/**
 * free_listint - function free the list
 * @head: pointer to the first element
 * Return: 0
 */
void free_listint(listint_t *head)
{
	listint_t *ptr = head;
	listint_t *next;

	while (ptr != NULL)
	{
		next = ptr->next;
		free(ptr);
		ptr = next;
	}
}
