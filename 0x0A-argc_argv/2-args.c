#include <stdio.h>
/**
 * main - print all arguments it recieves
 * @argc: argument count
 * @argv: array to hold commands
 * Return: 0 on success
 */
int main(int argc __attribute__((unused)), char **argv)
{
	int iter = 0;

	while (argv[iter])
	{
		printf("%s\n", argv[iter]);
		++iter;
	}
	return (0);
}
