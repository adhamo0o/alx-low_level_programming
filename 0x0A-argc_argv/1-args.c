#include <stdio.h>
/**
 *main - function prints number of arguments passed into it
 *@argc: arguments counter
 *@argv: arguments vector
 *Return: 0
 */
int main(int argc,__attribute__((unused)) char **argv)
{
int x;
for (x = 0; x < argc; x++)
printf("%d\n", argc);
return (0);
}
