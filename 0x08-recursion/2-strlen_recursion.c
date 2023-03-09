#include "main.h"

/**
 * _strlen_recursion - Computes the length of a string
 * @s: the string
 *
 * Return: number of characters
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return 1 + _strlen_recursion(s + 1);
}
