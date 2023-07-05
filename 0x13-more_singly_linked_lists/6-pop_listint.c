#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t
 * @head: pointer to the first node
 * Return: 0
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int data;

	if (head == NULL || *head == NULL)
		return (0);
	else
	{
		ptr = *head;
		*head = (*head)->next;
		data = ptr->n;
		free(ptr);
	}
	return (data);

}
