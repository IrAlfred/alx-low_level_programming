#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: string
 * @accept: char to find
 *
 * Return: Pointer from which string found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	int found;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		found = 0;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				found = 1;
				break;
			}
		}
		if (found == 1)
		{
			break;
		}
	}
	if (found == 1)
	{
		return (&s[i]);
	}
	else
	{
		return (NULL);
	}
}
