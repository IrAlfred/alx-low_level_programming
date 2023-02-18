#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - this program assign a random number and prints if it is positive, negative or zero
 * Return: 0(success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;				
	if(n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if(n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n");
	}
	return (0);
}

