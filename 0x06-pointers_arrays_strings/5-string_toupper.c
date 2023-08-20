#include "main.h"
/**
 * _islower - checks if a char is lowercase
 * @c: charcter to be checked.
 * Return: 1 if it is, 0 otherwise
 */
int _islower(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	return (0);
}
/**
 * string_toupper - convert lowercase schar to upper
 * @c: char to e converted
 * Return: pointer to converetdd strong
 */
char *string_toupper(char *c)
{
	int iter = 0;

	while (c[iter])
	{
		if (_islower(c[iter]))
		{
			c[iter] = (c[iter] - 32);
			iter++;
			continue;
		}
		c[iter] = c[iter];
		iter++;
	}
	return (c);
}
