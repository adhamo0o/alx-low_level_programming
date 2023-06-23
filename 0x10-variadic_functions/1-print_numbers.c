#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_numbers - function that prints numbers
 *@separator: the string to be printed
 *@n: numbers of integers
 *
 *Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ptr;

va_start(ptr, n);

while (i = 0; i < n)
{
if (separator == NULL)
printf("%d\n", va_arg(ptr, int));
else
printf("%d\n", va_arg(ptr, int));
printf("%s", separator);

i++;
}

putchar('\n');

va_end(ptr);
}
