#include "function_pointers.h"
/**
 *int_index - function that searches for an integer.
 *@array: pointer to int
 *@size: size of array
 *@cmp: pinter to function
 *
 *Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int x;
if (size <= 0)
return (-1);

for (x = 0; x <= size; x++)
{
if (x == array[size])
cmp(x);
else
return (-);
}
return(x);
}
