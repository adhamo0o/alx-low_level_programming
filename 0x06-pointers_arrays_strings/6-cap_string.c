#include "main.h"
#include <string.h>

/**
 * *cap_string - a function that capitalizes all words of a string.
 * @s: the string will be capitalized it words.
 *
 * Return: the string would be capitalized it words.
 */
char *cap_string(char *s)
{
int i;
int capitalize_next = 1;
for (i = 0; str[i] != '\0'; i++)
{
if (capitalize_next && (str[i] >= 'a' && str[i] <= 'z'))
{
str[i] -= 32;
capitalize_next = 0;
}
else if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || 
str[i] == ',' || str[i] == ';' || str[i] == '.' || 
str[i] == '!' || str[i] == '?' ||str[i] == '"' ||
str[i] == '(' || str[i] == ')' || str[i] == '{' || 
str[i] == '}')
{
capitalize_next = 1;
}
}
return str;
}
