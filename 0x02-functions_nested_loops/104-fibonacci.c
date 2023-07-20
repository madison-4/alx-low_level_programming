#include<stdio.h>
/**
 * main - print first 98 fibbonacci numbers
 * no arguments
 * Return: zero
 */
int main(void)
{
	long double first = 1, second = 2, next, count = 0;

	while (count < 98)
	{
		if (count < 97)
			printf("%.0Lf, ", first);
		else
			printf("%.0Lf, ", first);
		next = first + second;
		first = second;
		second = next;
		count++;
	}
	return (0);
}
