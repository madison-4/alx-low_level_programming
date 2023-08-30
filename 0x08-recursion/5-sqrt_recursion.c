#include "main.h"
/**
 * findroot - finds the root from a guess
 * @number: number to find root of
 * @guess: initial guess, starts at 1
 * Return: squareroot of number
 */
int findroot(int number, int guess)
{
	if ((guess * guess) > number)
		return (-1);
	if ((guess * guess) == number)
		return (guess);
	else
		return (findroot(number, guess + 1));
}
/**
 * _sqrt_recursion - get the sqaure root using recursion
 * @n: number whose squareroot is to be found
 * Return: -1 if there isn;'t a natural one, sqrt if there is
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return (findroot(n, 1));
}
