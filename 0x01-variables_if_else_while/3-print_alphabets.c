#include <stdio.h>

/**
 * main - print alphabet twice lowercase uppercase
 * Return: 0(success)
 */
int main(void)
{
	char c;
	int i;

	c = 'a';
	i = 0;
	while (i < 26)
	{
		putchar(c++);
		i = i + 1;
	}
	i = 0;
	c = 'A';
	while (i < 26)
	{
		putchar(c++);
		i = i + 1;
	}
	putchar('\n');
	return (0);
}
