#include <stdio.h>
/**
 *main - function prints number of arguments passed into it
 *@argc: arguments counter
 *@argv: arguments vector
 *Return: 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
if (argc == 0)
printf("1\n");
else
printf("%d\n", argc);


return (0);

}
