#include "main.h"
/**
 * _isdigit - checks if a character is a digit
 * @c: character to check
 * Return: 1 if it is, 0 otherwise
 */
int _isdigit(int c)
{
	if ((c > 47) && (c < 58))
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
	long long int num = 0, it = 0, sign = 1;

	while (s[it])
	{
		if (s[it] == '-')
			sign *= -1;
		if (_isdigit(s[it]))
		{
			num = (num * 10) + (s[it] - 48);
			if (!_isdigit(s[it + 1]))
				return (num * sign);
			it++;
			continue;
		}
		it++;
	}
	return (0);
}
