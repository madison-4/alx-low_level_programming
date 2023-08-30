#include "main.h"
int findroot(int number, int guess)
{
	if ((root * root) > number)
		return (-1);
	if ((root * root) == number)
		return (root);
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
