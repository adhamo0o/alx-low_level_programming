#include "lists.h"
/**
 * add_nodeint_end - function add node at the end
 * @head: pointer to the first element
 * @n: integer
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *tail = *head;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	while (tail->next != NULL)
	{
		tail = tail->next;
	}

	tail->next = new;

	return (new);
}
