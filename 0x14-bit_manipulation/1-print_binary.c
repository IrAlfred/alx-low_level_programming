#include "main.h"
#include <stdbool.h>

/**
 * print_binary - print in binary a long int provided
 * @n: number to print
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int i;
	bool started = false;

	for (i = 31; i >= 0; i--)
	{
		if (n & (1 << i))
		{
			_putchar('1');
			started = true;
		}
		else
		{
			if (started == true || i == 0)
				_putchar('0');
		}
	}
}
