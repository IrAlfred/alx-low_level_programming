#include <stdio.h>

/**
 * main - Program to print numbers from 0 to 9
 * Return: 0(success)
 */
int main(void)
{
	int i;
	int ch;

	i = 0;
	ch = 48;
	while (i < 10)
	{
		putchar((char)ch++);
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
