#include<stdio.h>
/**
 * main - print first 50 fibbonancci numbers
 * start with 1 and 2
 * no arguments
 * Return: 0 on success
 */
int main(void)
{
	unsigned long int first = 0, second = 1, temp, sum = 0;
	int counter;

	for (counter = 0; counter < 50; counter++)
	{
		temp = first + second;
		if (temp >= 4000000)
			break;
		first = second;
		second = temp;
		if ((temp % 2) == 0)
			sum += temp;
	}
	printf("%d\n", sum);
	return (0);
}
