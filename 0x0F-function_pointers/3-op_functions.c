#include <stdio.h>
#include <stdlib.h>

/**
 *op_add - function adds two integers
 *@a: first integer
 *@b: second integer
 *Return: result
 */
int op_add(int a, int b)
{
  return (a + b);
}
	   
/**
 *op_sub - function subs two integers
 *@a: first integer
 *@b: second integer
 *Return: result
 */
int op_sub(int a, int b)
{
  return (a - b);
}


/**
 *op_mul - function muls two integers
 *@a: first integer
 *@b: second integer
 *Return: result
 */
int op_mul(int a, int b)
{
  return (a * b);
}




/**
 *op_div - function divs two integers
 *@a: first int
 *@b: second int
 *Return: result
 */
int op_div(int a, int b)
{
  if (b == 0)
    {
      printf("Error\n");
      exit(100);
    }
  return (a / b);
}






/**
 *op_mod - function mods two integers
 *@a: first int
 *@b: second int
 *Return: result
 */
int op_mod(int a, int b)
{
  if (b == 0)
    {
      printf ("Error\n");
      exit(100);
    }
  return (a % b);
}
