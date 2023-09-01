#include "main.h"
/**
 * _isalpha - checks whether a chracter is alpha
 * @c: chracter to be checkd
 * Return: 1 if it is lowercase, uppercase 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
