#include "main.h"
/**
 * _isdigit - checks if a character is a digit
 * @c: character to check
 * Return: 1 if it is, 0 otherwise
 */
int _isdigit(int c)
{
	if (( c > 47) && (c < 58))
		return (1);
	else
		return (0);
}
/**
 * _atoi - convert an ascii char vto an int
 * @s: string to convert
 * Return: converted string or 0 if no numbers
 */
int _atoi(char *s)
{
	int num = 0, iter = 0, sign = 1;

	while (s[iter])
	{
		if (_isdigit(s[iter]))
		{
			if (s[iter - 1] == '-')
				sign = -1;
			num = (num * 10) + (s[iter] - 48);
			if (!_isdigit(s[iter + 1]))
				return (num * sign);
			iter++;
			continue;
		}
		iter++;
	}
	return (0);
}
