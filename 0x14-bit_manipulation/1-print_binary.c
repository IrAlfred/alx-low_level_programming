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

	for (i = sizeof(n) * 8 - 1; i >= 0; i--)
	{
		if (1 & (n >> i))
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

