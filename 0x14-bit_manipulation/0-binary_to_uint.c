#include "main.h"
/**
 *binary_to_unit - converts binary to unsigned int
 *@b: pointing to a string of 0 and 1 chars
 *Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
if (!b)
return (0);
while (*b)
{
if (*b != '0' && *b != '1')
return (0);
result <<= 1;
if (*b++ == '1')
result += 1;
}
return (result);
}
