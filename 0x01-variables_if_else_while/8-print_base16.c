#include <stdio.h>

/**
 * main - Program to print numbers from 0 to f base 16
 * Return: 0(success)
 */
int main(void)
{
	int i;
	char ch = 48;

	i = 0;
	while (i < 10)
	{
		putchar(ch++);
		i++;
	}
	ch = 'a';
	i = 0;
	while (i < 6)
	{
		putchar(ch++);
		i++;
	}
	putchar('\n');
	return (0);
}
