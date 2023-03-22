#include "main.h"

/**
 *print_alphanet_x10 - prints out the alphabet ten times
 *Return: 0 if succesgul
 */
void print_alphabet_x10(void)
{
char x;
int y;
for(y=0;y<=9;y++)
{
for(x='a';x<='z';x++)
{
 _putchar(x);
}
_putchar('\n');
}
}
