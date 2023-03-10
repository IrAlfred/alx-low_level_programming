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

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
