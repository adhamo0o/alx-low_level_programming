#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 *
 */
int (*get_op_func(char *s))(int, int)
{
  int (*ops[5])(int, int)={op_add, op_sub, op_mul, op_div, op_mod)
    char *ops_symplos = "+-*/%";
  while (ops_sumplos[i])
    {
      if (ops_symplos[i] == *s)
	{
	return (ops[i]);
	}
      i++;
    }
  return (NULL);
}
