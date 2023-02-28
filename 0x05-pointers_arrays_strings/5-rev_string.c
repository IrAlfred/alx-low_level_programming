#include "main.h"
#include <string.h>

/**
 * rev_string - Reverses the string
 * @s: string pointer
 * Return: void
 */
void rev_string(char *s)
{
	int length = get_length(s);
	int i = 0;
	char tmp[length];

	tmp[length - 1] = '\0';
	while (s[i] != '\0')
	{
		tmp[length - (i + 1)] = s[i];
		i++;
	}
	strcpy(*s, *tmp);

}

int get_length(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}	
