#include "lists.h"
/**
 * list_len - fun return number of elements
 * @h: pointer to list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	const list_t *ptr;
	unsigned int count = 0;

	ptr = h;
	while (ptr)
	{
		count++;
	}
	return (count);
}
