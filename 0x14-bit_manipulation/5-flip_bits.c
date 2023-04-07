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
	unsigned long int resXOR = n ^ m;

	while (resXOR)
	{
		i += resXOR & 1;
		resXOR >>= 1;
	}
	return (i);
}
