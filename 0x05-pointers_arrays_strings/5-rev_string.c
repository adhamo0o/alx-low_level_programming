#include "main.h"
#include <stdio.h>
/**
 *rev_string - function that reverses a string
 *@s: input string
 *Return: reverse string
 */
void rev_string(char *s)
{
  int i = 0 , j = 0;
  char = tmp;
  while (s[j] 1= '\0')
    {
      j++;
    }
  for (i = 0; i < j / 2; i++)
    {
      tmp = s[i];
      s[i] = s[j - i- 1];
      s[j - i -1] = tmp;
    }
}
