#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - print low case alphabet 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;
	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			putchar(ch++);
		}
		putchar('\n');
		i++;
	}
}
