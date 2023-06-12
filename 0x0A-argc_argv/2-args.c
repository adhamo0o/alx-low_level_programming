#include <stdio.h>
/**
 *main - function that prints all arguments it receives.
 *@argc: arguments counter
 *@argv: argumenst vector
 *
 *Return: 0
 */
int main(int argc, char *argv[])
{
int i;
while ((i = argc))
{
printf("%s\n", argv[i]);
argc++;
}



return (0);
}
