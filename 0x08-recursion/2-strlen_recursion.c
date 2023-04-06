#include "main.h"
/**
 *_strlen_recursion -  returns the length of a string
 *@s: pointer to string
 *Returns: int
 */
int _strlen_recursion(char *s)
{
int len = *s;
while (*s != '\0')
{
_strlen_recursion(s + 1)
}
len = *s;
return (len);
}
