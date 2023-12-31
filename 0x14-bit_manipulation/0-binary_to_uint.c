#include "main.h"
/**
 * _pow - return the base raise to a given power
 * @base: base of the expression
 * @index: index of the expression
 * Return: The result of base raised to index
 */
unsigned int _pow(unsigned int base, unsigned int index)
{
	unsigned int num = 1;

	while (index > 0)
	{
		num *= base;
		index--;
	}
	return (num);
}
/**
 * _strlen - get the length of a string
 * @str: string to get length
 * Return: length of the string, number of chars
 */
unsigned int _strlen(const char *str)
{
	unsigned int length = 0;

	while (str[length])
		length++;
	return (length);
}
/**
 * binary_to_uint - comverts a binary number to an unsigned int
 * @b: binary number as a string
 * Return: converted number or NULL on failure
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int raises, i, bit, num = 0, value;

	if (!(b))
		return (0);
	raises = ((_strlen(b)) - 1);
	for (i = 0; b[i] != '\0'; i++)
	{
		bit = b[i] - 48;
		if ((bit != 0) && (bit != 1))
			return (0);
		value = bit * ((_pow(2, raises)));
		num += value;
		raises--;
	}
	return (num);
}
