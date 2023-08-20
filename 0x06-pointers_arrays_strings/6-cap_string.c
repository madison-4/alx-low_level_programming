#include "main.h"
/**
 * _islower - checks if a char is lowercase
 * @c: character to be hecked
 * Return: 1 if it is, 0 otherwise
 */
int _islower(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	return (0);
}
/**
 * checkstr - checks if a char is among separators
 * @a: array to check
 * @c: char to check
 * Return: 1 if it is, 0 otherwise
 */
int checkstr(char *a, char c)
{
	int iter = 0;

	while (a[iter])
	{
		if (a[iter] == c)
			return (1);
		iter++;
	}
	return (0);
}
/**
 * cap_string - capitalize letters that come after separators
 * @s: string to capitalize
 * Return: capitalized string
 */
char *cap_string(char *s)
{
	char sep[] = " \t\n,;.,!?(){}";
	int iter = 0;

	while (s[iter])
	{
		if (iter == 0)
		{
			if (_islower(s[iter]))
				s[iter] = (s[iter] - 32);
		}
		if ((checkstr(sep, s[iter])) || s[iter] == 34)
		{
			if (_islower(s[iter + 1]) && s[iter + 1])
				s[iter + 1] = ((s[iter + 1] - 32));
		}
		iter++;
	}
	return (s);
}
