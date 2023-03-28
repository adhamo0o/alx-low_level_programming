#include "main.h"
#include <stdio.h>
/**
 *print_rev - function that prints a string, in reverse
 *@s: the string to be printed
*/
void print_rev(char *s)
{
int len = strlen(s);
int i = len - 1;
while (i >= 0)
{
_putchar(s[i]);
i--;
}
_putchar('\n');
}
