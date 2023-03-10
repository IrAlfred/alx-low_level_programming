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
	int i;
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (validNumber(argv[i]) == 1)
			{
				printf("Error\n");
				return (1);
			}
		}
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}

/**
 * validNumber - validate number
 * @str: string format
 *
 * Return: 0 (ok) otherwise 1
 */
int validNumber(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (!isdigit(str[i]))
		{
			return (1);
		}
		i++;
	}
	return (0);
}
