#include <stdio.h>
#include "main.h"

/**
 * _putchar: Prints _putchar string on the standard output
 * Return: void (success)
 */
void _putchar(void)
{
	char ch[8];
	int i;

	ch = "_putchar";
	for(i = 0; i < 8; i++)
	{
		putchar(ch[i]);
	}
}

/**
 * main - Entry point of the program
 * Return: 0 (success)
 */
int main(void)
{
	_putchar();
	return (0);
}
