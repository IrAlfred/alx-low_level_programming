#include <stdio.h>

/**
 * main - print alphabet
 * Return: 0(success)
 */
int main(void)
{
	char c;
	int i;

	c = 'a';
	i = 0;
	while(i < 25)
	{
		putchar(c);
		c = c + 1;
	}
	putchar('\n');
	return (0);
}
