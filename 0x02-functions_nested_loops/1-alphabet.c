#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - print low case alphabet
 * Return: void
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch++);
	}
	putchar('\n');
}
