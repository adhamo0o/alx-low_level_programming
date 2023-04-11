#include <stdio.h>
/**
 *main - prints all arguments it receives
 *@argc: this is the number of argument
 *@argv: this is array of argument
 *Return: 0
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
ptintf("$s\n", argv[i]);
}
return (0);
}
