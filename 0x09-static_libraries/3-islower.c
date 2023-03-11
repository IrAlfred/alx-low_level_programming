#include "main.h"
#include <stdio.h>

/**
 * _islower - Checks if a character is lower
 * @c : is the character passed to the function
 * Return: 1 (character is lowercase) and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
