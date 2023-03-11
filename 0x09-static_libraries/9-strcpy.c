#include "main.h"

/**
 * _strcpy - copies the content of a array to another
 * @dest: destination array
 * @src: source array
 * Return: char pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
