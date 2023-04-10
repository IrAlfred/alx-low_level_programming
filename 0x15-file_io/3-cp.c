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
	int file1, file2, nbChars;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file1 = open(argv[1], O_RDONLY);
	if (file1 == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	return (0);
}
