#include "3-calc.h"
/**
 * op_add - sum of given integers
 * @a: first int
 * @b: second int
 * Return: sum of the functions
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - difference of given integers
 * @a: first int
 * @b: second int
 * Return: differencve of the functions
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - product of given integers
 * @a: first int
 * @b: second int
 * Return: product of the functions
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - sum of given integers
 * @a: first int
 * @b: second int
 * Return: quortient of the functions
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - sum of given integers
 * @a: first int
 * @b: second int
 * Return: modulus of the functions
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
