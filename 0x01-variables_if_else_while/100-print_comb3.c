#include<stdio.h>
/**
 * main - print double dogit numbers without repetition
 * no arguments
 * Return: 0 on success
 */
int main(void)
{
	int firstdigit = 48, seconddigit;

	while (firstdigit <= 57)
	{
		seconddigit = firstdigit + 1;
		while (seconddigit <= 57)
		{
			putchar(firstdigit);
			putchar(seconddigit);
			if (firstdigit == 56 && seconddigit == 57)
				break;
			putchar(44);
			putchar(32);
			seconddigit++;
		}
		firstdigit++;
	}
	putchar(10);
	return (0);
}
