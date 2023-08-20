#include "main.h"
/**
 * rot13 - encode a string by moving its chars by 13 chars.
 * @s: string to be encoded
 * Return: encided string
 */
char *rot13(char *s)
{
	int iter = 0;

	while (s[iter])
	{
		if (((s[iter] >= 78) && (s[iter] <= 90)) || ((s[iter] >= 110) && (s[iter] <= 122)))
			s[iter] = (s[iter] + 13);
		s[iter] = (s[iter] + 13);
		iter++;
	}
	return (s);
}
