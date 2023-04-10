#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: number of arguments
 * @argv: array of strings
 *
 * Return: int
 */
int main(int argc, char **argv)
{
	int file_from, file_to, nbChars;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_to = open(argv[1], O_WRONLY);


	return (0);
}
