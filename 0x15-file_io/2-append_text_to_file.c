#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: filename string
 * @text_content: content to append to file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nbLetters = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (text_content != NULL)
	{
		while (text_content[nbLetters])
			nbLetters++;
		if (write(fd, text_content, nbLetters) == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
