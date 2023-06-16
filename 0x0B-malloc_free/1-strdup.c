#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
*_stdrup - function that returns a pointer to a newly allocated space
*@str: pointer ro char
*Return: NULL if str = NULL
*/
char *_strdup(char *str)
{
unsigned int x;
char *ptr;

if (str == NULL)
return (NULL);

ptr = (char *)malloc(sizeof(char));
if (ptr == NULL)
return (NULL);

for (x = 0; x < strlen(str + 1); x++)
ptr[x] = str[x];

putchar('\0');
return (ptr);

free(ptr);
}
