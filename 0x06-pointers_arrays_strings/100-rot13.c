#include "main.h"
/**
 * _isalpha - checks if a char is an alphabetical char
 * @c: char to check
 * Return: 1 if its is, 0 otherwise
 */
int _isalpha(char c)
{
	if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
		return (1);
	return (0);
}
/**
 * rot13 - encode a string by moving its chars by 13 chars.
 * @s: string to be encoded
 * Return: encided string
 */
char *rot13(char *s)
{
	int i = 0;

	while (s[i])
	{
		while (_isalpha(s[i]))
		{
			if (((s[i] >= 78) && (s[i] <= 90)) || ((s[i] >= 110) && (s[i] <= 122)))
				s[i] = (s[i] - 13);
			s[i] = (s[i] + 13);
			i++;
		}
		i++;
	}
	return (s);
}
