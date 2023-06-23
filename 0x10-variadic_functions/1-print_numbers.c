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

for (i = 0; i < n; i++)
{
if (separator == NULL)
printf("%d\n", va_arg(ptr, int));
else
printf("%s%d\n", separator, va_arg(ptr, int));
}

putchar('\n');

va_end(ptr);
}
