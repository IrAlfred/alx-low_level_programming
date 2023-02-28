#include "main.h"

/**
 * print_rev - Prints a string in reverse order
 * @s: string param
 * Return: void
 */
void print_rev(char *s)
{
	int length = _strlen(s);
	int i;

	for (i = length; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
