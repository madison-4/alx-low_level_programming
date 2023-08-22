#include "main.h"
/**
 * _strlen - get length of a string
 * @str: char pointer
 * Return: length of the string
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}
/**
 * infinite_add - adds two integers stored as strings
 * @n1: first integer
 * @n2: second integer
 * @r: buffer to store result
 * @size_r: size of r
 * Return: charctsr sum of the addition
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int iter, carry = 0, n1len = (_strlen(n1) - 1), n2len = (_strlen(n2) - 1);
	int fill = size_r - 1, count = 0, i;

	while ((n1len >= 0) || (n2len >= 0))
	{
		if (!(n1[n1len]))
			n1[n1len] = 0;
		if (!(n2[n2len]))
			n2[n2len] = 0;
		iter = ((((int)n1[n1len]) + ((int)n2[n2len])) + carry) % 10;
		carry = ((((int)n1[n1len]) + ((int)n2[n2len])) + carry) / 10;
		if (fill < 0)
			return (0);
		r[fill] = (char) iter;
		n1len--;
		n2len--;
		fill--;
		count++;
	}
	for (i = 0; i < count; i++, fill++)
	{
		r[iter] = r[fill];
	}
	r[count + 1] = '\0';
	return (r);
}
