#include<stdio.h>
/**
 * main - print alphabet in lowercase
 * then print in uppercase
 * Return: 0 on success
 */
int main(void)
{
	int character = 97;

	while (character <= 122)
	{
		putchar(character);
		character++;
	}
	character = 65;
	while (character <= 90)
	{
		putchar(character);
		character++;
	}
	putchar(10);
	return (0);
}
