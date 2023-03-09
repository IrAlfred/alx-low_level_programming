#include "main.h"

/**
 * _print_rev_recursion - function to print in reverse order recursively
 * @s: string to be printed
 *
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if(*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
