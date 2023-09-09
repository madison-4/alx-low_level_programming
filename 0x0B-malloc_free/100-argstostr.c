#include "main.h"
/**
 * _strlen - get the length of a string
 * @str: string
 * Return: length of the string
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}
/**
 * _strcat - concatentaes two strings overwriting the terinating null byte
 * and adding it to teh end
 * @dest: string to append to
 * @src: string to append
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int iter = 0, lendest = _strlen(dest);

	while (src[iter] != '\0')
	{
		dest[lendest] = src[iter];
		iter++;
		lendest++;
	}
	dest[lendest + 1] = '\n';
	dest[lendest + 2] = '\0';
	return (dest);
}
/**
 * argstostr - concatenate  all argumenst given to a program
 * @size: argument count
 * @av: argument vector array
 * Return: pointer to new string array
 */
char *argstostr(int size, char **av)
{
	int length = 0, iter = 0;
	char *new;

	if ((size == 0) || (av == NULL))
		return (NULL);
	for (iter = 0; iter < size; iter++)
		length += _strlen(av[iter]);
	new = malloc((length * sizeof(char)) + 1);
	if (new == NULL)
		return (NULL);
	for (iter = 0; iter < size; iter++)
		_strcat(new, av[iter]);
	new[length + 1] = '\0';
	return (new);
}
