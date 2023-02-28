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

/**
 * _strlen - gets the length of the string
 * @s: pointer string
 * Return: int (length)
 */
int _strlen(char *s)
{
	int i = 0;
	
	while (s[i] != '\0')
	{
		i++;
	}
	return (i - 1);
}
