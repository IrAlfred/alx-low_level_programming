#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to stdout
 * @filename: string filename
 * @letter: number of characters to read
 *
 * Return: the number of characters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t count;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);	
	count = read(fd, buffer, letters);
	write(STDOUT_FILENO, buffer, count);
	free(buffer);

	return (count);
}
