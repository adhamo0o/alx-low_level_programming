#include "main.h"
/**
 *flip_bits -  function that returns the number of bits you would need
 *to flip to get from one number to another.
 *@n: unsigned long int
 *@m: unsigned long int
 *Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int x = n ^ m, count = 0;
while (x)
{
if (x & 1)
count++;
f = f >> 1;
}
return (count);





}
