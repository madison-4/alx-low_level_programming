#include "main.h"
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
	{
		for (arr = 0; av[iter][arr]; arr++)
			length++;
		length++;
	}
	length++;
	new = malloc((length * sizeof(char)) + 1);
	if (new == NULL)
		return (NULL);
	for (iter = 0; iter < size; iter++)
	{
		for (arr = 0; arr[iter][arr]; arr++)
			new[status] = arr[iter][arr];
		new[++status] = '\n';
	}
	new[++status] = '\0';
	return (new);
}
