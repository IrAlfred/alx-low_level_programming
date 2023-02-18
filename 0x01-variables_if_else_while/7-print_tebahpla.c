#include <stdio.h>

/**
 * main - print alphabet in reverse order
 * Return: 0(success)
 */
int main(void)
{
	char c;
	int i;

	c = 'z';
	i = 0;
	while (i < 26)
	{
		putchar(c--);
		i = i + 1;
	}
	putchar('\n');
	return (0);
}
