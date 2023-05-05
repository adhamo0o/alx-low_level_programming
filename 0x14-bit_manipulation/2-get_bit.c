#include "main.h"
/**
 *get_bit - a function that returns the value of a bit at a given index.
 *@n: unsigned long int
 *@index: the index
 *Return: value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= 64)
return (-1);
return ((n >> index) & 1);













}
