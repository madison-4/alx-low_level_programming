#include "main.h"
#include "main.h"
/**
 * rot13 - encode a string by moving its chars by 13 chars.
 * @s: string to be encoded
 * Return: encided string
 */
char *rot13(char *s)
{
	int i = 0, arriter;
	char alph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i])
	{
		for (arriter = 0; arriter < 52; arriter++)
		{
			if (s[i] == alph[arriter])
			{
				s[i] = rot[arriter];
				break;
			}
		}
		i++;
	}
	return (s);
}
