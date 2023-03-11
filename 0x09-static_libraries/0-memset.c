#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: byte of memory pointed
 * @b: constant byte
 * @n: number of bytes
 *
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
