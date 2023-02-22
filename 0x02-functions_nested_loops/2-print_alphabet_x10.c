#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - print low case alphabet 10 times
 * Return: void
 */
void print_alphabet(void)
{
	char ch;
	int i;

	ch = 'a';
	i = 0;
	while (i < 10)
	{
		while (ch <= 'z')
		{
			putchar(ch++);
		}
		putchar('\n');
		i++;
	}
}
