#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of its numbers arguments
 * @n: number of numbers to add
 * Return: sum of the numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, iter, num;
	va_list args;

	va_start(args, n);
	for (iter = 0; iter < n; iter++)
	{
		num = va_arg(args, int);
		sum += num;
	}
	va_end(args);
	return (sum);
}
