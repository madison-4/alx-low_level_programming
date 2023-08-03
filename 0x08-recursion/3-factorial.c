#include "main.h"
/**
 * factorial - get the factorial of a number
 * @n: number to get factorial of
 * Return: factorial
 */
int factorial(int n)
{
	int factorial;

	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	factorial = n * factorial(n - 1);
	return (factorial);
}
