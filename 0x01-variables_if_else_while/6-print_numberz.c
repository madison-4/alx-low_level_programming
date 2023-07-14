#include<stdio.h>
/**
 * main - print digits
 * Return: 0 on success
 */
int main(void)
{
	int character = 48;

	while (character <= 57)
	{
		putchar(character);
		character++;
	}
	putchar(10);
	return (0);
}
