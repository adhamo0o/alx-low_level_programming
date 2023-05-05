#include "main.h"
/**
 *binary_to_unit - converts binary to unsigned int
 *@b: pointing to a string of 0 and 1 chars
 *Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
if (b == NULL)
{
return (0);
}
for (, *b != '\0', b++)
{
if (*b == '0')
{
result << 1;
}
else if (*b == '1')
{
result = (result << 1) | 1;
}
else
{
return (0);
}
return (result);
}
