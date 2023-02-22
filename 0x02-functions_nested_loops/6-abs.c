#include "main.h"
#include <stdio.h>

/**
 * _abs - prints the absolute value of a integer argument
 * @n: argument
 * Return: Absolute value
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
