#include "lists.h"
/**
 * listint_len - function that returns the number of elements
 * @h: pointer
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr;
	unsigned int count = 0;

	ptr = h;
	while (ptr)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
