#include "main.h"
#include <stdio.h>

/**
 *swap_int -  function that swaps the values of two integers.
 *@a: the first integer
 *@b: the second integer
 *Return: 0
 */
void swap_int(int *a, int *b)
{
int t;
t = *a;
*a = *b;
*b = t;
}

  
