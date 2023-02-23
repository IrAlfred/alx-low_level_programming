#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int c = 0;
	long int sum = 0;

	while (b <= 4000000)
	{
		if (b % 2 == 0)
		{
			sum += b;
		}
		c = b;
		b += a;
		a = c;
	}
	printf("%ld\n", sum);
	return (0);
}
