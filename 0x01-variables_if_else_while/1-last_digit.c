#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print last digit of a number
 * Return: 0 on sucess]
 * no arguments
 */
int main(void)
{
	int n, lastdigit;
	char str[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;
	printf("%s %d is ", str, n);
	if (lastdigit > 5)
		printf("%d and is greater than 5", lastdigit);
	else if (lastdigit == 0)
		printf("%d and is 0", lastdigit);
	else if (lastdigit < 6 && lastdigit != 0)
		printf("%d and is less than 6 and not 0");
	return (0);
}
