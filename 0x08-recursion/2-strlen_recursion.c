#include "main.h"
/**
 *_strlen_recursion -  returns the length of a string
 *@s: pointer to string
 *Return: lenght of string.
 */
int _strlen_recursion(char *s)
{
while (*s != '\0')
{
_strlen_recursion(s + 1);
}
return (1 + _strlen_recursion(s + 1));
}
