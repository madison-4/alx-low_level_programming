#include "main.h"
/**
 * swap_int - swaps two integers
 * @a: address of first int
 * @b: address of second int
 * no return
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
