#include <stdio.h>

/**
 * main - program to print first 5
 * Return: 0 (success)
 */
int main(void)
{
	int one = 1;
	int two = 2;
	int i = 0;
	
	while (i < 50)
	{
		if (i < 49)
		{
			two += one;
			one = two - one;
			printf(", ");
		}
		i++;
	}
	printf("\n");
	return (0);
}
