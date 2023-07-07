#include "main.h"
/**
 * clear_bit - function sets the value of a bit to 0 at a given index
 * @n: the number
 * @index: the index
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= 64)
		return (-1);

	*n = *n & ~mask;
	return (1);
}
