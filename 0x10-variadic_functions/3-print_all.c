#include "variadic_functions.h"
/**
 * sprint - porints a stribng according to task requirements
 * @str: string to be printed
 * Return: No return
 */
void sprint(char *str)
{
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
/**
 * print_all - print a number of formatted output
 * @format: string containing spoecifiers
 * Return: no return
 */
void print_all(const char *const format, ...)
{
	int formcount, i;
	va_list args;
	char c, *str;
	float d;

	while (format[formcount] != '\0')
	{
		va_start(args, format);
		switch (format[formcount])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				d = va_arg(args, double);
				printf("%f", d);
				break;
			case 's':
				str = va_arg(args, char *);
				sprint(str);
				break;
			default:
				continue;
		}
		formcount++;
		va_end(args);
	}
	printf("\n");
}
