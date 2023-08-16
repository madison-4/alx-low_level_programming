#include<stdio.h>
#include<math.h>
/**
 * isprime - check if a number is prime
 * @n: number to be checked
 * Return: 0 if it is, 1 if it is not
 */
int isprime(long long int n)
{
	int i;

	for (i = 0; i <= (n / 2); i++)
	{
		if ((n % i) != 0)
			continue;
		else
			return (1);
	}
	return (0);
}
/**
 * print - print largest prime number
 * @n: number tpo prinmt is factos
 * Return: largest porime factor
 */
int print(long long int n)
{
	int i, prime = 1;

	for (i = 1; i <= (n / 2); i++)
	{
		if ((n % i) == 0)
		{
			if((!isprime(i)) && i > prime)
				prime = i;
			else
				continue;
		}
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
