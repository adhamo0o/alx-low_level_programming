#include "main.h"
/**
 *_pow_recursion - function returns value of x raised to the power of y
 *@x: first value
 *@y: second value
 *Return: 0
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
x = _pow_recursion(y * y, x);
return (x);
}
