#include "main.h"
#include <stdio.h>

/**
 * print_sign - Prints a sign of a number passed as argument
 * @n: number to test
 * Return: 1 (number > 0) 0(zero) -1 (number <0)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (+1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	_putchar('\n');
}
