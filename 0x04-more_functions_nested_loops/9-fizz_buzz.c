#include<stdio.h>
/**
 * main - print fizzbuzz test
 * Return: 0 on succes
 * no arguments
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (((i % 3) == 0) && ((i % 5) == 0))
			printf("FizzBuzz ");
		else if	((i % 3) == 0)
			printf("Fizz ");
		else if ((i % 5) == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	return (0);
}
