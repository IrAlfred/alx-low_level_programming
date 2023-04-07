#include "main.h"

/**
 * flip_bits - Computes the number of bits to flip number1 => number2
 * @n: first number
 * @m: second number
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	int j;

	for (j = 63; j >= 0; j--)
	{
		if ((n & (1 << j)) != (m & (1 << j)))
			i++;
	}
	return (i);
}
