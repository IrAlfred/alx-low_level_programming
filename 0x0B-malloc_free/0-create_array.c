#include "main.h"

/**
 * create_array - Creates an array of chars and initializes it
 * @size: size of the array
 * @c: char to initializes array with
 *
 * Return: char pointer
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	if (size == 0)
	{
		ptr =  NULL;
	}
	else
	{
		ptr = malloc(sizeof(char) * size);
		if (ptr == NULL)
			ptr = NULL;
		else
		{
			while (i < size)
			{
				*(ptr + i) = c;
				i++;
			}
		}
	}
	return (ptr);
}
