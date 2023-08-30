#include "main.h"
/**
 * _sqrt_recursion - get the sqaure root using recursion
 * @n: number whose squareroot is to be found
 * Return: -1 if there isn;'t a natural one, sqrt if there is
 */
int _sqrt_recursion(int n)
{
	int guess = (n / 2), better = ((guess + x) / 2);

	if (n < 1)
		return (-1);
	if (n == 1)
		return (1);
	if (guess == better)
		return (better);
	return (_sqrt_recursion(better));
}
