#include "main.h"
/**
  * get_endianness - check endianness]
  * No arguments
  * Return: 0 for big, 1 for little
  */
int get_endianness(void)
{
	unsigned int num = 1;
	char *c;

	c = (char *)&num;
	return (c[0]);
}
