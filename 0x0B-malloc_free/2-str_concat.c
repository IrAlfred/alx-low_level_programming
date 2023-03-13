#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: final string
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int length1, length2, i = 0, j = 0;

	length1 = getLength(s1);
	length2 = getLength(s2);
	ptr = malloc(sizeof(char) * (length1 + length2));
	if (ptr != NULL)
	{
		while (i < length1)
		{
			*(ptr + i) = *(s1 + i);
			i++;
		}
		j = i;
		i = 0;
		while (i < length2)
		{
			*(ptr + j) = *(s2 + i);
			i++;
			j++;
		}
		*(ptr + j) = '\0';
	}
	return (ptr);
}

/**
 * getLength - Gets the length of a string
 * @s: string
 *
 * Return: the length
 */
int getLength(char *s)
{
	int i = 0;

	if (s == NULL)
		return (0);
	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
