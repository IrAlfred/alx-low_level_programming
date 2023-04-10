#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: number of arguments
 * @argv: array of strings
 *
 * Return: int
 */
int void main(int argc, char **argv)
{
	if (argc != 3)
	{
		exit(97);
		fprintf(stderr, "Usage: cp file_from file_to\n");
	}
	return (0);
}
