#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return : 0 if equal, positif if greater else negative value
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int diff = 0;

	while (*(s1 + i) == *(s2 + i))
	{
		if (*(s1 + i) == '\0' || *(s2 + i) == '\0')
		{
			break;
		}
		i++;
	}
	diff = *(s1 + i) - *(s2 + i);
	return (diff);
}
