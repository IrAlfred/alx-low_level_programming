#include "main.h"

/**
 * create_file - Function that creates a file
 * @filename: filename of file to be created
 * @text_content: content to fill
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t wrCount;
	unsigned int nbChars = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		text_content = "";
	}

	while (text_content[nbChars])
		nbChars++;
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	wrCount = write(fd, text_content, nbChars);

	if (wrCount == -1)
		return (-1);

	close(fd);
	return (1);
}
