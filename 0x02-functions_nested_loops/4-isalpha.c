#include "main.h"
/**
 *_isalpha - is a funcation test if a letter is lower or ypper case
 *@c: - char
 *Return: 0 (Seccess)
 */
int _isalpha(int c)
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');;
}
