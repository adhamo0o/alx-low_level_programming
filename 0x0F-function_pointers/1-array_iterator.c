#include <stdio.h>
/**
 *array_iterator - function that exectes function given as a param
 *@array: array of integers
 *@size: size of array
 *@action: function pointer
 *Return void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array != NULL && size != NULL)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
