#include "main.h"
/**
 * _abs - converts a number to the absilute value
 * @n: number to be converted
 * Return: converted number
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
