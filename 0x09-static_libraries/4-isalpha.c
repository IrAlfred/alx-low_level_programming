#include "main.h"
#include <stdio.h>

/**
 * _isalpha - Check for alphabetic character
 * @c: is the character passed
 * Return: 1 (for a letter) and 0 otherwise
 */
int _isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
