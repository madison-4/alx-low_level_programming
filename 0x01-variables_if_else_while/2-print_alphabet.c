#include<stdio.h>
/**
 * main - print alphabet in lowercase
 * Return: 0 on success
 */
int main(void)
{
	int character = 97;

	while (character <= 122)
		putchar(character);
	putchar(10);
	return (0);
}
