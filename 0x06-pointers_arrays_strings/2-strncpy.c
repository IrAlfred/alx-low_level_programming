#include "main.h"

/**
 * _strncpy - copies the content of str to another
 * @dest: destination string
 * @src: source to be copied
 * @n: number of bytes to copy
 *
 * Return: destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while ((*(src + i) != '\0') && i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
