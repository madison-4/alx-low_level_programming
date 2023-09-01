#include<stdio.h>
#include<stdlib.h>
/**
 * main - convert cents given to number of coins to give
 * @argc: argument count
 * @argv: char pointer array to hold commands
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int quot[5], coins[5] = {25, 10, 5, 2, 1};
	int cents, iter, sum = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (iter = 0; iter < 5; iter++)
	{
		quot[iter] = cents / (coins[iter]);
		cents = cents % (coins[iter]);
	}
	for (iter = 0; iter < 5; iter++)
		sum += quot[iter];
	printf("%d\n", sum);
	return (0);
}
