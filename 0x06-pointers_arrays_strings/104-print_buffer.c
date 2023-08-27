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
		printf("%08x: ", iter);
		for (i = 0; i < 10 && ((i + iter) <= size); i += 2)
		{
			printf("%02x%02x ", b[i + iter], b[i + 1 + iter]);
		}
		for (i = 0; i < 10 && ((i + iter) < size); i++)
		{
			if (isprint(b[i + iter]))
				putchar(b[i + iter]);
			else
				putchar('.');
		}
		putchar('\n');
	}
}
