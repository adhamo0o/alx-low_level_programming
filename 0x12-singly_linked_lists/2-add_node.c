#include "lists.h"
/**
 * add_node - fun used to add node at begin
 * @head: pointer to list
 * @str: pointer to string
 * Return: addres of the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
	free(new_node);
}
