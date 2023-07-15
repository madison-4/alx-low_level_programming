#include<stdio.h>
/**
 * main - print double dogit numbers without repetition
 * no arguments
 * Return: 0 on success
 */
int main(void)
{
	int first = 48, second, third;

	while (first <= 57)
	{
		second = first + 1;
		while (second <= 57)
		{
			third = second + 1;
			while (third <= 57)
			{
				putchar(first);
				putchar(second);
				putchar(third);
				if (first == 55 && second == 56 && third == 57)
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
