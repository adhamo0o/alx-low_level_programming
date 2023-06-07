#include "main.h"
/**
 *_strlen_recursion - function returns the length of a string.
 *@s: pointer to string
 *Return: 0
 *
 */
int _strlen_recursion(char *s)
{
int temp;
if (*s == '\0')
return(0);
temp = _strlen_recursion(s + 1);
return (temp);
}
