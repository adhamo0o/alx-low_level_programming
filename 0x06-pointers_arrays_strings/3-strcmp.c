#include "main.h"
/**
 * _strcmp: a function that compares two strings
 * @s1: A pointer to the first string to be compared
 *  @s2: A pointer to the second string to be compared
 * Return: If str1 < str2, the negative difference of the
 * first unmatched characters.
 * If str1 == str2, 0.
 * If str1 > str2, the positive difference
 * of the first unmatched character
 */
int _strcmp(char *s1, char *s2)
{
int i;
for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
{
if (s1[i] < s2[i])
{
return (-1);
}
else if (s1[i] > s2[i])
{
return (1);
}
}
if (s1[i] == s2[i])
{
return (0);
}
else if (s1[i] < s2[i])
{
return (-1);
}
else
{
return (1);
}
}
