#include "main.h"

/**
 * get_max - get the maximum number with a given number of bits
 * @n: number of bits
 *
 * Return: number
 */
unsigned long int get_max(int n)
{
	int i;
	unsigned long int max = 1;

	for (i = 0; i < n; i++)
	{
		max *= 2;
	}
	return (max);
}

/**
 * get_bit - Gets the value of a bit at a given index
 * @n: number
 * @index: index of the bit
 *
 * Return: Value of the bit or -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (n & (1 << index))
		return (1);
	else
		return (0);
}
