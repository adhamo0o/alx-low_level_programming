#include <stdio.h>
/**
 *main - function prints its name
 *@argc: arguments counter
 *@argv: arguments vector
 *Return: 0
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; (i = argc) ; i++)
printf("%s\n", argv[0]);
return (0);
}
