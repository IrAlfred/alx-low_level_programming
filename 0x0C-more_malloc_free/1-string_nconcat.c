#include "main.h"

/**
 * string_nconcat - Concatenates strings
 * @s1: first string
 * @s2: second string
 * @n: number of characters to concatenates from s2
 *
 * Return: pointer to the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length1 = 0, length2 = 0, i, j;
	char *new_str;
	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[length1] != '\0')
		length1++;
	while (*(s2 + length2) != '\0')
		length2++;
	if (n > length2)
		n = length2;
	new_str = malloc(sizeof(char) * (length1 + n + 1));
	if (new_str == NULL)
		return (NULL);
	for (i = 0; i < length1; i++)
	{
		*(new_str + i) = s1[i];
	}

	for (j = 0; j < n; j++, i++)
	{
		*(new_str + i) = *(s2 + j);
	}
	*(new_str + i) = '\0';
	return (new_str);
}
