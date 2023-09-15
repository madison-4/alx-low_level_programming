#include "variadic_functions.h"
/**
 * print_strings - prints numbers
 * @separator: sepaatpr to print between strings
 * @n: number of strings
 * Return: no return, just print and exit
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int iter = 0;
	char *str;
	va_list args;

	va_start(args, n);
	for (iter = 0; iter < n; iter++)
	{
		str = va_arg(args, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (separator && iter < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
}
