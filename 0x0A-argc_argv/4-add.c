#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
/**
 * checknum - checks if a given string is a number
 * @str: string given
 * the number is checked to contain only digits
 * Return: 1, if it is, 0 if it isn't
 */
int checknum(char *str)
{
	int iter;

	for (iter = 0; str[iter]; iter++)
	{
		if (!(isdigit(str[iter])))
			return (0);
	}
	return (1);
}
/**
 * main - adds positive numbers given to iots commandline
 * If the argumenst contain non-numbers print Error, \n return 1
 * if no number print 0 then \n
 * @argc: argument count
 * @argv: char array to hold arguments
 * Return: 0 on success, non-zero on error
 */
int main(int argc, char **argv)
{
	int iter, sum = 0, num;

	if (argc <= 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (iter = 1; iter < argc; iter++)
	{
		if (!(checknum(argv[iter])))
		{
			printf("Error\n");
			return (1);
		}
	}
	for (iter = 1; iter < argc; iter++)
	{
		num = atoi(argv[iter]);
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
