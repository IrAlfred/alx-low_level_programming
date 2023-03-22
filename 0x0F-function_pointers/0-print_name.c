#include "function_pointers.h"

/**
 * print_name - Prints the name passed as argument
 * @name: name to print
 * @f: function pointer
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	f(name);
}
