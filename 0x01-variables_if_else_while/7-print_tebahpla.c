#include<stdio.h>
/**
 * main - print alphabet in lowercase
 * Return: 0 on success
 */
int main(void)
{
	int character = 122;

	while (character >= 97)
	{
		putchar(character);
		character--;
	}
	putchar(10);
	return (0);
}
