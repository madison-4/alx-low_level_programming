#include "variadic_functions.h"
/**
 * print_numbers - rints numbers
 * @separator: separatpr to print between nubers
 * @n: number of numbers
 * Return: no return, just print and exit
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int iter = 0, num;
	va_list args;

	va_start(args, n);
	for (iter = 0; iter < n; iter++)
	{
		num = va_arg(args, int);
		printf("%d", num);
		if (separator && iter < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
}
