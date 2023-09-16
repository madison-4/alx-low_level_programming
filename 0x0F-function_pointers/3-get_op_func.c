#include "3-calc.h"
/**
 * get_op_func - get the choice given by the user
 * @s: character choice
 * Return: result of the choice
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op)
	{
		if (*s == *(ops[i].op))
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
