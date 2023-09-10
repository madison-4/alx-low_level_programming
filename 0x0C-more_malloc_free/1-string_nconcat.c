#include "main.h"
/**
 * string_nconcat - concatenate two strings in a newly allocated space in mempry
 * @s1: first string
 * @s2: second string
 * @n: bytes to contante limit
 * Return: pointer to newly allocated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, iter = 0;
	char *new;

	while (s1[len1])
		len1++;
	while (s2[len2] && len2 < n)
		len2++;
	new = malloc((len1 + len2 + 1) * sizeof (char));
	if (!(new))
		return (NULL);
	for (iter = 0; iter < len1; iter++)
		new[iter] = s1[iter];
	for (iter = 0; iter < len2; iter++)
		new[len1 + iter] = s2[iter];
	new[len1 + len2 + 1] = '\0';
	return (new);
}
