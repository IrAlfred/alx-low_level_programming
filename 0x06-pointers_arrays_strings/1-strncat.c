#include "main.h"

/**
 * _strncat - Concatenate two strings n numbers char of second one
 * @dest: Destination string
 * @src: string to append
 * @n: number of chars to concat
 *
 * Return: pointer to string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while ((*(src + j) != '\0') && j < n)
	{
		*(dest + i) = *(src + j);
		j++;
		i++;
	}

	return (dest);
}
