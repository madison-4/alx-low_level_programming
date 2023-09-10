#include "main.h"
unsigned int _strlen(char *s);
/**
 * string_nconcat - concantente strings up to n bytes
 * concatente in a new memory space
 * @s2: string 2
 * @s1: first string
 * @n: number of bytes in s2 to move iver
 * Return: pointer to new concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int iter, secit;
	char *new;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n > _strlen(s2))
		n = _strlen(s2);
	new = malloc(_strlen(s1) + n + 2);
	if (new == NULL)
		return (NULL);
	for (iter = 0; s1[iter]; iter++)
		new[iter] = s1[iter];
	for (secit = 0; s2[secit] && secit <=y n; secit++, iter++)
		new[iter] = s2[secit];
	new[iter] = '\0';
	return (new);
}
/**
 * _strlen - get the length of a string excluding the treminating null byte
 * @s: string
 * Return: length of te string
 */
unsigned int _strlen(char *s)
{
	unsigned int iter = 0;

	while (s[iter])
	{
		iter++;
	}
	return (iter - 1);
}
