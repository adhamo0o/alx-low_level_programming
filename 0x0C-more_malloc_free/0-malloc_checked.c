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
void *ptr1;

ptr1 = malloc(b);
if (ptr1 == NULL)
exit(98);

return (ptr1);

}
