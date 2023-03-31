#include "main.h"
/**
 * reverse_array
 *@a: array of integers
 *@n: numbers of elements in array
 */
void reverse_array(int *a, int n)
{
int i , h;
for (i = 0, i < n--; i++)
{
h = a[i];
a[i] = a[n];
a[n] = h;
}
}
