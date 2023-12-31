#include "3-calc.h"
/**
 * main - get the operation and calculate
 * @argc: argument count
 * @argv: arguments arrau
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	func = get_op_func(argv[2]);
	if (!(func))
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", func(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
