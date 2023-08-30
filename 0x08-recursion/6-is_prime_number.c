#include "main.h"
/**
 * checkprime - checks if a number is prime or not
 * @n: number to check
 * @guess: factors to check, typically start at two
 * Return: 1 if it is, 0 otherwise
 */
int checkprime(int n, int guess)
{
	if (n == guess)
		return (1);
	if (!(n % guess))
		return (0);
	return (checkprime(n, guess + 1));
}
/**
 * is_prime_number - checks if a number is prime or not
 * @n: number to be checked
 * Return: 1 if it is, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (checkprime(n, 2));
}
