#include <stdlib.h>
#include <stdio.h>

/**
  * main - multiplies two numbers given to it.
  * It assumes the nunmbers are integers
  * If the given numbers are not two, it prints Error
  * @argc: argument count
  * @argv: character array to hold commdsn
  * Return: 0 on success, non-zero otherwise
  */
int main(int argc, char **argv)
{
	int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]), num2 = atoi(argv[2]);
	printf("%d\n", (num1 * num2));
	return (0);
}
