#include "main.h"
/**
 * factorial - get the factorial of a number
 * @n: number to get factorial of
 * Return: factorial
 */
int factorial(int n)
{
	int fact;

	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	fact = n * factorial(n - 1);
	return (factorial);
}
