#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *str_concat - function that concatenates two strings.
 *@s1: pointer of string
 *@s2: pointer of strings
 *Return: 0
 */
char *str_concat(char *s1, char *s2)
{

unsigned int x, y, z;
char *ptr1;
char *ptr2;
char *con;

ptr1 = malloc(sizeof(char) * strlen(s1 + 1));
ptr2 = malloc(sizeof(char) * strlen(s2 + 1));

for (x = 0; x < strlen(s1); x++)
ptr1[x] = s1[x];

for (y = 0; y < strlen(s2); y++)
ptr2[y] = s2[y];

con[z] = ptr1[x] + ptr2[y];
if (con == NULL)
return (NULL);

return (con[z]);
}
