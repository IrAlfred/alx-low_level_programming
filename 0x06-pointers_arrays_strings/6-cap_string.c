#include "main.h"
#include  <stdbool.h>

/**
 * cap_string - Capitalize all words of a string
 * @str: string
 *
 * Return: char pointer
 */
char *cap_string(char *str)
{
	int i = 0;
	bool capNext = true;

	while (*(str + i) != '\0')
	{
		if (capNext == true)
		{
			if (*(str + i) > 'a' && *(str + i) < 'z')
			{
				*(str + i ) = *(str + i) - 32;
			}
		}
		i++;
		switch (*(str + i))
		{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '\"':
			case '(':
			case ')':
			case '{':
			case '}':
				capNext = true;
				break;
			default :
				capNext = false;
		}
	}
	return (str);
}
