#include "main.h"
/**
 * get_bit - function returns value of a bit at a given index.
 * @n: integer
 * @index: the index
 * Return: the value of a bit at a given index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);

	return ((n >> index) & 1);
}
