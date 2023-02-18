#include <stdio.h>

/**
 * main - Program to print numbers from 0 to 9
 * Return: 0(success)
 */
int main(void)
{
	int i;
	char ch;

	i = 0;
	ch = '0';
	while (i < 10)
	{
		putchar(ch++);
		i++;
	}
	putchar('\n');
	return (0);
}
