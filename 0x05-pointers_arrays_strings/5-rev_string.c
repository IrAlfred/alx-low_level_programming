#include "main.h"
#include <string.h>

/**
 * rev_string - Reverses the string
 * @s: string pointer
 * Return: void
 */
void rev_string(char *s)
{
	int length = 0;
	int i = 0;
	char tmp;

	while (*(s + length) != 0)
	{
		length++;
	}
	length--;
	while (length >= i)
	{
		tmp = *(s + length);
		*(s + length) = *(s + i);
		*(s + i) = tmp;
		length--;
		i++;
	}

}
