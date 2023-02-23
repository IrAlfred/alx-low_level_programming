#include "main.h"
#include <stdio.h>
/**
 * print_column -prints column
 * @i: argument1
 * @j: argument 2
 * @num: argument 3
 * @tmp: argument
 * @n: argument5
 * Return: void
 */
void print_column(int i, int j, int num, int tmp, int n)
{
	while (j <= n)
	{
		num = i * j;
		if ((num / 10) > 0)
		{
			tmp = num / 10;
			if (tmp > 9)
			{
				putchar((tmp / 10) + '0');
				putchar((tmp % 10) + '0');
			}
			else
			{
				putchar(' ');
				putchar((num / 10) + '0');
			}
		}
		else
		{
			putchar(' ');
			putchar(' ');
		}
		putchar((num % 10) + '0');
		if (j != n)
		{
			putchar(',');
			putcahr(' ');
		}
		j++;
	}
}


/**
 * print_times_table - prints the n times table
 * @n : parameter
 * Return: void
 */
void print_times_table(int n)
{
	int i = 0;
	int j = 1;
	int num = 0;
	int tmp = 0;

	if (n > 15 || n < 0)
		return;
	while (i <= n)
	{
		putchar('0');
		if (n != 0)
		{
			putchar(',');
			putchar(' ');
		}
		print_column(i, j, num, tmp, n);
		putchar('\n');
		i++;
		j = 1;
	}
}
