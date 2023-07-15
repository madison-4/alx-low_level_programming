#include<stdio.h>
/**
 * main - print all single digit numbers
 * no arguents
 * Return: 0 on success
 */
int main(void)
{
	int digit = 48;

	while (digit <= 57)
	{
		putchar(digit);
		if (digit != 57)
		{
			putchar(44);
			putchar(32);
		}
		else
		{
			putchar(10);
		}
		digit++;
	}
	return (0);
}
