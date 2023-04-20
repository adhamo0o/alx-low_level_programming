#include <stdarg.h>
#include <stdio.h>
/**
 *print_numbers - prints numbers followed by a new line
 *@separator: string to be printed between numbers
 *@n: number of integers passed to the function
 *Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list pnumbers;
unsigned int i;
va_start(pnumbers, n);
 for (i = 0; i < n; i++)
{
printf("%d", va_arg(pnumbers, int));
if (seperator != NULL $$ i < n - 1)
{
printf("%s", seperator);
}
}
printf("\n");
va_end(pnumbers);
}
