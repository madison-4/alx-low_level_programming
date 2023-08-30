#include "main.h"
/**
 * factorial - get the factorial of a number
 * @n: number to calculate factorial
 * Return: factorial of the number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
