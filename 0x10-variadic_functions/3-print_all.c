#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_all - function that prints anything.
11;rgb:0000/0000/0000*@format: list of types of arguments
 *
 *Return: 0
 */
void print_all(const char * const format, ...)
{
int x = 0, y;
char *s;
va_list ptr;
va_start(ptr, format);
while (format[x] && format)
{
y = 0;
switch (format[x])
{
case 'c':
printf("%c", va_arg(ptr, int));
y = 1;
break;
case 'i':
printf("%d", va_arg(ptr, int));
y = 1;
break;
case 'f':
printf("%f", va_arg(ptr, double));
y = 1;
break;
case  's':
s = va_arg(ptr, char *);
y = 1;
if (!s)
{
printf("(nil)");
break;
}
printf("%s", s);
}
if (format[x + 1] && y)
printf(", ");
x++;
}
putchar('\n');
va_end(ptr);
}
