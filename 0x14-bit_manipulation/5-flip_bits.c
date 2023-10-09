#include "main.h"
/**
  * flip_bits - coubnts the bits needed to flip to match a number
  * @n: first number
  * @m: second number
  * Return: number of bits to flip
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0, xor_result = n ^ m;

	while (xor_result > 0)
	{
		count += (xor_result & 1);
		xor_result >>= 1;
	}
	return (count);
}
