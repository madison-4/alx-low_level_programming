#include "main.h"
/**
 * leet - encode letters in a string
 * @c: string to be neoded
 * Return: encoded string
 */
char *leet(char *c)
{
	char let[] = "aeotl";
	char rep[] = "43071";
	int iter = 0, arriter;

	while (c[iter])
	{
		for (arriter = 0; c[arriter]; arriter++)
		{
			if (c[iter] == (let[arriter] || (let[arriter] - 32)))
				c[iter] = rep[arriter];
		}
		iter++;
	}
	return (c);
}
