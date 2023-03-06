#include "main.h"

/**
 * _strspn - Gets the number of bytes in of only bytes from second one
 * @s: first string
 * @accept: second string
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int i = 0;
	int j = 0;
	int found = 0;

	while (*(s + i) != '\0')
	{
		found = 0;
		j = 0;
		while (*(accept + j) != '\0')
		{
			if (*(accept + j) == *(s + i))
			{
				found = 1;
				break;
			}
			j++;
		}
		if (found == 0)
		{
			break;
		}
		else
		{
			length++;
		}
		i++;
	}
	return (length);
}
