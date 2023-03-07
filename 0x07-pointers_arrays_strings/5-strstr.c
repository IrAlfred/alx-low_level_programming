#include "main.h"

/**
 * _strstr - finds the first occurence of the substring
 * @needle: substring to find
 * @haystack: The string
 *
 * Return: pointer to located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j = 0, count = 0;

	while (needle[j] != '\0')
		j++;
	j--;
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (count = 0; count < j; count++)
			{
				if (*(haystack + (i + count)) != needle[count])
					break;
			}
			if (count == j)
			{
				return (&haystack[i]);
			}
		}
	}
		return (NULL);
}
