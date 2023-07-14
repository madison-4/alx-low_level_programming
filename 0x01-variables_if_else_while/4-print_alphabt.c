#include<stdio.h>
/**
 * main - print alphabet in lowercase
 * EXCEPT Q AND E
 * Return: 0 on success
 */
int main(void)
{
	int character = 97;

	while (character <= 122)
	{
		if (character == 113 || character == 101)
			continue;
		putchar(character);
		character++;
	}
	putchar(10);
	return (0);
}
