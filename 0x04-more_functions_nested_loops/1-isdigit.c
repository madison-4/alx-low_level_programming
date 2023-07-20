#include "main.h"
/**
 * _isdigit - check if given argument's a digit
 * @c: given argument
 * Return:  if it is, 0 otherwise
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
