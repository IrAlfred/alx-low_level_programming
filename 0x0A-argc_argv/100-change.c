#include "main.h"

/**
 * main - Entry point of the program
 * @argc: arguments count
 * @argv: array of string arguments
 *
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int amount, tmp, nbCoins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amount = atoi(argv[1]);
	if (amount < 0)
		printf("0\n");
	else
	{
		if (amount >= 25)
		{
			nbCoins += amount / 25;
			amount -= nbCoins * 25;
		}
		if (amount >= 10)
		{
			tmp = amount / 10;
			nbCoins += tmp;
			amount -= tmp * 10;
		}
		if (amount >= 5)
		{
			tmp = amount / 5;
			nbCoins += tmp;
			amount -= tmp * 5;
		}
		if (amount >= 2)
		{
			tmp = amount / 2;
			nbCoins += tmp;
			amount -= tmp * 2;
		}
		if (amount >= 1)
			nbCoins++;
		printf("%d\n", nbCoins);
	}

	return (0);
}
