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
int x = 0, i;
char c;
float f;
char *s;
va_list ptr;
va_start(ptr, format);
while (format[x] && format)
{
switch (format[x])
{
case 'c':
c = va_arg(ptr, int);
printf("%c", c);
break;
case 'i':
i = va_arg(ptr, int);
printf("%d", i);
break;
case 'f':
f = va_arg(ptr, double);
printf("%f", f);
break;
case  's':
s = va_arg(ptr, char *);
if (s == NULL)
{
printf("(nil)");
break;
}
printf("%s", s);
break;
}
printf(", ");
x++;
}
putchar('\n');
va_end(ptr);
}
