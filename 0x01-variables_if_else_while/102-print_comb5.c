#include<stdio.h>
/**
 * main - print double dogit numbers without repetition
 * no arguments
 * Return: 0 on success
 */
int main(void)
{
	int firstnumber = 0, secondnumber;

	while (firstnumber <= 98)
	{
		secondnumber = firstnumber + 1;
		while (secondnumber <= 99)
		{
			putchar((firstnumber / 10) + 48);
			putchar((firstnumber % 10) + 48);
			putchar(32);
			putchar((secondnumber / 10) + 48);
			putchar((secondnumber % 10) + 48);
			if ((firstnumber == 98) && (secondnumber == 99))
				break;
			putchar(44);
			putchar(32);
			secondnumber++;
		}
		firstnumber++;
	}
	putchar(10);
	return (0);
}
