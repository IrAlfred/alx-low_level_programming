#include "main.h"

/**
 * _strchr - Search for the first occurence of a character
 * @s: the string
 * @c: the character
 *
 * Return: pointer to the first occurence found
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;
	char *f;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			break;
		}
		i++;
	}
	if (*(s + i) == c)
	{
		f = &s[i];
	}
	else
	{
		f = NULL;
	}
	return (f);
}
