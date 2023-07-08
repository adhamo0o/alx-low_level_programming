#include "main.h" 
/**
* flip_bits - function returns number of bits
* @n: first number
* @m: second number
* Return: the number of bits
*/ 
unsigned int flip_bits(unsigned long int n, unsigned long int m) 
{
unsigned long int x = n ^ m, count = 0; 
while (x)
{
if (x & 1)
count++;
x = x >> 1;
}
return (count);
}
