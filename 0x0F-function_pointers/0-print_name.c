#include <stdio.h>
/**
 *print_name - function print a name
 *@name: pointer to name
 *@f: function pointer
 *Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (f != NULL)
{
f(name);
}
}
