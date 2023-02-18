#include <stdio.h>

/**
 * main - print alphabet except q and e
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
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
		i = i + 1;
		c++;
	}
	putchar('\n');
	return (0);
}
