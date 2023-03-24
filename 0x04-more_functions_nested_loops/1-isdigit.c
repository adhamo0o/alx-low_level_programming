#include "main.h"
/**
 *_isdigit - function checks for a digit 
 *@c: ascii code for the character will be checked.
 *Returns: 1 if it is a digit and 0 if otherwise
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
 else
{
return (0);
}
}
