#include<stdio.h>
/**
 * main - sum multiple of 3 and 5 below 1024
 * no arguments
 * Return: 0 on success nonzero otherwise
 */
int main(void)
{
	int sum = 0, iterator;

	for (iterator = 3; iterator < 1024; iterator++)
	{
		if ((iterator % 3) == 0 || (iterator % 5) == 0)
			sum += iterator;
	}
	printf("%d\n", sum);
	return (0);
}
