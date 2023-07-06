#include "main.h"
#include <string.h>
/**
 * binary_to_unit -  function convert binary to unsigned int
 * @b: pointer to string
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i, len;
	unsigned int power = 1, res = 0;

	if (b == NULL)
		return (0);

	len = strlen(b);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
			res += power;
		power *= 2;
	}
	return (res);
}
