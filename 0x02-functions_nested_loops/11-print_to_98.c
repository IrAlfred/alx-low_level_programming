#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints from a number n to 98
 * @n: a given number
 * Return: void
 */
void print_to_98(int n)
{
	int i = n;
	if (n < 98)
	{
		while (i <= 98)
		{
			if (i == 98)
			{
				printf("%d", i);
				i++;
			}
			else
			{
			printf("%d", i);
			i++;
			}
		}
	}
	else if (n > 98)
	{
		while (i >= 98)
		{
			if (i == 98)
			{
				printf("%d", i);
				i--;
			}
			else
			{
			printf("%d, ", i);
			i--;
			}
		}
	}
	else
	{
		printf("%d", n);
	}
}
