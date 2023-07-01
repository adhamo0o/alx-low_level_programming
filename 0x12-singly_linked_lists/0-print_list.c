#include "lists.h"
/**
 * print_list - fun prints all the elements
 * @h: pointer to list
 *
 * Return: numbers of elements
 *
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr;
	unsigned int count = 0;

	ptr = h;
	while (ptr)
	{
		if (ptr->str != NULL)
			printf("[%d] %s\n", ptr->len, ptr->str);
		else
			printf("[0] (nil)\n");
	count++;
	ptr = ptr->next;
	}
	return (count);
}
