#include "main.h"
#include <stdio.h>

/**
 * sum - sum of multiple of 3 or 5 below 1024
 * Return: void
 */
void sum(void)
{
	int i = 0;
	int sum = 0;

	while (i <= 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
		i++;
	}
	printf("%d\n", sum);
}

/**
 * main - prints the sum
 * Return: always 0 (success)
 */
int main(void)
{
	sum();
	return (0);
}
