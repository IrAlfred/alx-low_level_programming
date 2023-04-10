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
	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}
	return (0);
}
