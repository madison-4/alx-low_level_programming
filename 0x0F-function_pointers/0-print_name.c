#include "function_pointers.h"
/**
 * print_name - print the name given
 * @name: name to be printed
 * @f: function pointer given as argument
 * Return: no return
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		(*f)(name);
}
