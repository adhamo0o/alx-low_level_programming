#include "main.h"
/**
 *_isupper - funcaion chesk if the character is uppercase
 *@c: the character entered
 *Return: 1 if uppercase and 0 if otherwise
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
