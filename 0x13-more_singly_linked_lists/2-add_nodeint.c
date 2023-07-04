#include "lists.h"
/**
 * add_nodeint - fun add node at first
 * @head: pointer to the first node
 * @n: number of elements
 * Return: address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
