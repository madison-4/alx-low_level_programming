#include "main.h"
/**
 * _strlen - get the length of a sttring
 * @str: string to dinf length of
 * Return: length of the string
 */
int _strlen(char *str)
{
	int length = 0;

	while (*str)
	{
		length++;
		str++;
	}
	return (length);
}
/**
 * _rev - reverse a string
 * @str: string to reverse
 * no Return
 */
void _rev(char *str)
{
	int iter = 0, length = _strlen(str);
	char temp;

	for (iter = 0; iter < (length / 2); iter++)
	{
		temp = str[iter];
		str[iter] = str[length - iter - 1];
		str[length - iter - 1] = temp;
	}
}
/**
 * infinite_add - add two numbers and store them in a buffer
 * if the szie of the buffer is not enough, return 0
 * use strings as the numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store results
 * @size_r: size of the buffer
 * Return: pointer to storage buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = _strlen(n1), len2 = _strlen(n2), digit1, sum = 0, carry = 0;
	int maxlen, fill = 0, iter1, iter2, digit2;

	maxlen = len1 > len2 ? len1 : len2;
	if ((maxlen + 1) > size_r)
		return (0);
	iter1 = len1 - 1;
	iter2 = len2 - 1;
	while (iter1 >= 0 || iter2 >= 0 || carry)
	{
		digit1 = (iter1 >= 0) ? n1[iter1] - '0' : 0;
		digit2 = (iter2 >= 0) ? n2[iter2] - '0' : 0;

		sum = digit1 + digit2 + carry;
		carry = sum / 10;
		if (fill < (size_r - 1))
		{
			r[fill] = (sum % 10) + '0';
		}
		else
			return (0);
		fill++;
		iter1--;
		iter2--;
	}
	r[fill] = '\0';
	_rev(r);
	return (r);
}
