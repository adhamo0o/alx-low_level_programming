#include <stddef.h>
/**
 *array_iterator - function that executes a function given as a parameter
 *on each element of an array.
 *@array: pinter to array
 *@size: size of array
 *@action: function pointer
 *Return: void
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;
for (i = 0; i < size; i++)
acion(array[i]);
}
