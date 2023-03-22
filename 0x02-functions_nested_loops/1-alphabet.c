#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase
 * Return: 0
 */
int _putchar(char c) {
  return putchar(c);
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
