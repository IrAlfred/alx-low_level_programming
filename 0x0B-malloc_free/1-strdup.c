#include "main.h"

/**
 * _strdup - Duplicates the string to another copy
 * @str: string to be duplicated
 *
 * Return: pointer on the copy
 */
char *_strdup(char *str)
{
	int i = 0;
	char *ptr;

	if (str == NULL)
	{
		ptr = NULL;
	}
	else
	{
		while (*(str + i) != '\0')
		{
			i++;
		}
		ptr = malloc(i + 1);
		i = 0;
		if (ptr != NULL)
		{
			while (*(str + i) != '\0')
			{
				*(ptr + i) = *(str + i);
				i++;	
			}
			*(ptr + i) = '\0';
		}
	}
	return (ptr);
}
