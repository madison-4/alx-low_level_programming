#include<stdio.h>
#include<math.h>
/**
 * isprime - check if a number is prime
 * @n: number to be checked
 * Return: 1 if it is, 0 if it is not
 */
int isprime(long long int n)
{
	int i;

	for (i = 2; i <= (n / 2); i++)
	{
		if ((n % i) != 0)
			continue;
		else
			return (0);
	}
	return (1);
}
/**
 * print - print largest prime number
 * @n: number tpo prinmt is factos
 * Return: largest porime factor
 */
int print(long long int n)
{
	int prime, div = 2;

	while (div < n)
	{
		if ((n % div) == 0)
		{
			prime = div;
			n = n / div;
		}
		else
			div = div + 1;
	}
	return (prime);
}
/**
 * main - porint largest prime number
 * no arguments
 * Return: 0 on succss, non-zero otherwise
 */
int main(void)
{
	printf("%d\n", print(612852475143));
	return (0);
}
