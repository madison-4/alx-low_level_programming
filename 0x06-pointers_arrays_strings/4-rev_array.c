#include "main.h"
/**
 * reverse_array - reverse an arrays of integers
 * @n: array size
 * @a: array
 * Return: no return
 */
void reverse_array(int *a, int n)
{
	int iter, count = (n / 2);

	for (iter = 0; iter <= count; iter++)
	{
		s[n - 1] = temp;
		s[n - 1] = s[iter];
		s[iter] = temp;
		n--;
	}
}
