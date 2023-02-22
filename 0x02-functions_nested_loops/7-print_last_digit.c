#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - Prints the last digit
 * @n: argument
 * Return: int value
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = -1 * last;
	}
	_putchar('0' + last);
	return (last);
}
