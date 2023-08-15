#include<stdio.h>
/**
 * main - print first 98 fibbonacci numbers
 * no arguments
 * Return: zero
 */
int main(void)
{
	unsigned long first = 1, second = 2, next, count = 2, remainder, quot;
	unsigned long int largest = 1000000000000;

	printf("%lu, %lu, ", first, second);
	while (count <= 98)
	{
		next = first + second;
		first = second;
		second = next;
		if (next > largest)
		{
			quot = next / largest;
			remainder = next % largest;
			printf("%lu%lu", quot, remainder);
		}
		else
		{
			printf("%lu", next);
		}
		if (count < 97)
			printf(", ");
		count++;
	}
	putchar(10);
	return (0);
}
