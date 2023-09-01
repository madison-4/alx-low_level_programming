#include "main.h"
/**
 * _isupper - check if the argument's an uppercase letter
 * @c: argument to be checked
 * Return: 1 if it is, 0 otherwise
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	else
		return (0);
}
