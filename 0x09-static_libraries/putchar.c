#include<unistd.h>

/**
 * _putchar - writes a char to stdout
 * @c: char to be written
 * Return: 1 on success
 * On error, -1 and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
