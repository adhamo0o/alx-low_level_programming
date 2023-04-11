#include <stdio.h>
/**
 *main - prints all arguments it receives
 *@argc: number of argument
 *@argv: array of argument
 *Return: 0
 */
xint main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}
