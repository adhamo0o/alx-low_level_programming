#include <stdio.h>
#include <stdib.h>
/**
  * main - Program that multiplies two numbers.
 * @argc: This is the argument count
 * @argv: This is the argument vector
 *
 * Return: 0;
 */
int main(int argc, char *argv[])
{
int index, multiplication;
multiplication = 1;
if (argv < 3)
{
printf("Error\n");
return (1);
}
for (index = 1; index < argc; index++)
{
mul = multiplication *atoi(argv[index]);
}
printf("%d\n", multiplication);
return (0);
}
