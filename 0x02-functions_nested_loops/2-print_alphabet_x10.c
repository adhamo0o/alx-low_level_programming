#include "main.c"
/**
 *print_alphanet - prints out the alphabet 
 *Return: 0 if succesgul
 */
void print_alpnabet(void)
{
  char x;
  int y;
  for(y=0;y<=10;y++)
    {
      for(x='a';x<='z';x++)
	{
	  _putchar(x);
	}
      _putchar('\n');
    }
}
