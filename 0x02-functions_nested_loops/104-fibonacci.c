#include<stdio.h>
/**
 * main - print first 98 fibbonacci numbers
 * no arguments
 * Return: zero
 */
int main(void)
{
	unsigned long int first = 1, second = 2, next, count;

	printf("%d, %d, ", first, second);
	for (count = 2; count < 98; count++)
	{
		next = first + second;
		first = second;
		second = next;
		printf("%d, ", next);
	}
	return (0);
}
