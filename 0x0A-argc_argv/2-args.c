#include <stdio.h>
/**
 *main - prints all arguments it receives
 *@argc: number of argument
 *@argv: array of argument
 *Return: 0
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
ptintf("%s\n", argv[i]);
return (0);
}
