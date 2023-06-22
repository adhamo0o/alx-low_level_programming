#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *main - the main function
 *@argc: argument counter
 *@argv: argument vector
 *Return: int
 */
int main(int argc, char *argv[])
{
int result, num1, num2;
int (*fun)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}

fun = get_op_func(argv[2]);
if (fun == NULL)
{
printf("Error\n");
exit(99);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);

if (argv[2][0] == '/')
{
if (num2 == 0)
{
printf("Error\n");
exit(100);
}
}

result = fun(num1, num2);
printf("%d\n", result);

return (0);

}
