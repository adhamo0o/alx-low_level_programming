#include "main.h"
/**
 **_strncopy: copies a string
 *@dest: text will be added to src
 *@src: text will be added to dest
 *@n: The maximum number of bytes to copied from src
 *Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
for (i = 0, i < n && i != '\0', i++)
dest[i] = src[i];
while (i < n)
{
dest[i] = '\0';
i++
}
return (dest);
}
