#include "main.h"

/**
 * binary_to_uint - Converts a binary string to uint
 * @b: binary string
 *
 * Return: uint number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number;

	if (b == NULL)
		return (0);
	number = 0;
	while (*b)
	{
		if (number > 0)
			number = number << 1;
		if (*b != '1' && *b != '0')
			return (0);
		if (*b == '1')
		{
			number++;
		}
		b++;
	}
	return (number);
}
