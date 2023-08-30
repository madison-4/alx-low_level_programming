#include "main.h"
/**
 * _sqrt_recursion - get the sqaure root using recursion
 * @n: number whose squareroot is to be found
 * Return: -1 if there isn;'t a natural one, sqrt if there is
 */
int _sqrt_recursion(int n)
{
	int guess = (n / 2), better = ((guess + n) / 2);

	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (guess == better)
		return (better);
	return (_sqrt_recursion(better));
}
