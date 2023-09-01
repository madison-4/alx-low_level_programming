#include <stdio.h>
/**
 * main - print number of arguments passed
 * @argc: argument count
 * @argv: array to hold commandline arguments
 * Return: 0 on success, non-zero otherwise
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", (argc - 1));
	return (0);
}
