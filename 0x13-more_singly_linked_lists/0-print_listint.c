#include "lists.h"
/**
 * print_listint - function that prints all the elements
 * @h: pointer
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;
	unsigned int count = 0;

	ptr = h;
	while (ptr)
	{
		if (ptr != NULL)
			printf("%d\n", ptr->n);
		else
			return (0);
	count++;
	ptr = ptr->next;
	}
	return (count);
}
