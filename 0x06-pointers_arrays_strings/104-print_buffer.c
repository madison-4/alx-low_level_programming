#include<stdio.h>
#include<ctype.h>
/**
 * print_buffer - prints a buffer, not null terminated
 * @b: uffer ponter
 * @size: size of the buffer
 * no return
 */
void print_buffer(char *b, int size)
{
	int iter = 0, i;

	for (iter = 0; iter < size; iter += 10)
	{
		printf("%02x ", i);
		for (i = 0; i < 10 && ((i + iter) < size); i++)
		{
			printf("%02x ",(unsigned char)b[i + iter]);
			if (isprint(b[i + iter]))
				putchar(b[i + iter]);
			else
				putchar('.');
		}
		putchar('\n');
	}
}
