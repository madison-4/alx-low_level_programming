#include<stdio.h>
/**
 * main - print digits hexadecimal
 * Return: 0 on success
 */
int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num);
		num++;
	}
	num = 97;
	while (num <= 102)
	{
		putchar(num);
		num++;
	}
	putchar(10);
	return (0);
}
