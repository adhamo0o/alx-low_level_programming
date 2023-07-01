#include "lists.h"
/**
 * add_node_end - fun add node at the end
 * @head: poiner to the first node
 * @str: pinter to the string
 * Return: address of the new element
 */
list_t *add_node_end(__attribute__((unused)) list_t **head, const char *str)
{
	list_t *tail = *head;
	list_t *new_node = malloc(sizeof(size_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{	
		*head = new_node;
		return (*head);
	}
		while (tail->next != NULL)
		tail = tail->next;

	tail->next = new_node;

	return (new_node);
	free(new_node);
}
