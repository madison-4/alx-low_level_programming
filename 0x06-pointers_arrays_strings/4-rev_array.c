#include "main.h"
/**
 * reverse_array - reverse an arrays of integers
 * @n: array size
 * @a: array
 * Return: no return
 */
void reverse_array(int *a, int n)
{
	int iter, count = (n / 2), temp = 0;

	for (iter = 0; iter <= count; iter++)
	{
		a[n - 1] = temp;
		a[n - 1] = a[iter];
		a[iter] = temp;
		n--;
	}
}
