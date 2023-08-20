#include "main.h"
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
		if (((s[i] >= 78) && (s[i] <= 90)) || ((s[i] >= 110) && (s[i] <= 122)))
			s[i] = (s[i] - 13);
		s[i] = (s[i] + 13);
		i++;
	}
	return (s);
}
