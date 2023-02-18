#include <stdio.h>

/**
 * main - program that print combinations of two dgit
 * Return: 0 (success)
 */
int main(void)
{
	int ch1;
	int ch2;

	ch1='0';
	while (ch1 <= '9')
	{
		ch2 = ch1 + 1;
		while (ch2 <= '9')
		{
			putchar(ch1);
			putchar(ch2);
			if (ch1 != '8')
			{
				putchar(',');
				putchar(' ');
			}
			ch2++;
		}
		ch1++;
	}
	putchar('\n');
	return (0);
}
