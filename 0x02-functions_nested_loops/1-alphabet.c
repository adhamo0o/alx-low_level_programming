#include <stdio.h>

/**
 * print_alphabet - prints alphabet in lowercase
 * Return: 0
 */

int _putchar(char c);
void print_alphabet(void);

int main() {
  print_alphabet();
  return 0;
}
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar (alpha);
	}
	_putchar ('\n');
}
