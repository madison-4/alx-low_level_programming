#include<stdio.h>
/**
 * main - print digits
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
	putchar(10);
	return (0);
}
