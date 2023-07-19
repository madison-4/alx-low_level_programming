#include <stdio.h>
/**
 * main - print first 50 fibbonancci numbers
 * start with 1 and 2
 * no arguments
 * Return: 0 on success
 */
int main(void)
{
	unsigned long long int first = 0, second = 1, temp;
	int counter;

	for (counter = 0; counter < 50; counter++)
	{
		temp = first + second;
		first = second;
		second = temp;
		printf("%lu", temp);
		if (counter == 49)
			putchar('\n');
		else
			printf(", ");
	}
	return (0);
}
