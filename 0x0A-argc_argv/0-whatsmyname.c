#include <stdio.h>
/**
 * main - print program name
 * @argc: argument count
 * @argv: array of commandline arguments passed to program
 * Return: 0 on success, non zero otherwise
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
