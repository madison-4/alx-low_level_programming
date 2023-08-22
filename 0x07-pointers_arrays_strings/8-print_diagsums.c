#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print sum of diagonals
 * @a: int point
 * @size: size of square matrix
 * Return: sum of the two diagonals
 */
void print_diagsums(int *a, int size)
{
	int sum = 0, iter1, sum2 = 0;

	for (iter1 = 0; iter1 <= (size * size); iter1 += (size + 1))
		sum += a[iter1];
	for (iter1 = size - 1; iter1 <= (size * size) - size; iter1 += (size - 1))
	sum2 += a[iter1];
	printf("%d %d\n", sum, sum2);
}
