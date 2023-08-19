#include "main.h"
/**
 * _strcmp - comprae two strings and return the difference
 * It will return 0 if they're equal
 * @s1: string to subtract from
 * @s2: string to sutract
 * Return: difference
 */
int _strcmp(char *s1, char *s2)
{
	int difference = 0, iter = 0;

	while (s1[iter] && s2[iter])
	{
		difference += (s1[iter] - s2[iter]);
		iter++;
	}
	if (s1[iter] || s2[iter])
	{
		if (s1[iter])
		{
			while (s1[iter])
			{
				difference += s1[iter];
				iter++;
			}
		}
		if (s2[iter])
		{
			while (s2[iter])
			{
				difference += s2[iter];
				iter++;
			}
		}
	}
	return (difference);
}
