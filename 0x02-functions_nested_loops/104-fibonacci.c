#include<stdio.h>
/**
 * main - print first 98 fibbonacci numbers
 * no arguments
 * Return: zero
 */
int main(void)
{
	unsigned long first = 1, second = 2, next, count = 0, remainder, quot;
	unsigned long int largest = 1000000000000000;

	while (count < 98)
	{
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
		next = first + second;
		first = second;
		second = next;
		if (count < 97)
			printf(", ");
		count++;
	}
	return (0);
}
