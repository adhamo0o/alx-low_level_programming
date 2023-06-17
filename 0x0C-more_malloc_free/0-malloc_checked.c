#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - function that allocates memory using malloc.
 *@b: unsigned integer
 *
 *Return: 0
 *
 */
void *malloc_checked(unsigned int b)
{
int *ptr;
ptr = (int *)malloc(sizeof(int) * b);
if (ptr == NULL)
exit(98);

return (ptr);

}
