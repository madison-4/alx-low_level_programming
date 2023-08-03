#include "main.h"
/**
 * _pow_recursion - raise a number to a given power
 * @x: base
 * @y: exponent
 * Return: value of x raised to y
 */
int _pow_recursion(int x, int y)
{
	int power;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	power = x * _pow_recursion(x, (y - 1));
	return (power);
}
