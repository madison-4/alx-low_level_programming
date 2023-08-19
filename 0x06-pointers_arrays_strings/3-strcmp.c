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
		difference += ((s1[iter]) - (s2[iter]));
		iter++;
	}
	difference += (s1[iter] - s2[iter]);
	return (difference);
}
