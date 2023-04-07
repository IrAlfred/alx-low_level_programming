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
	unsigned long int resXOR = n ^ m;

	for (j = sizeof(resXOR) * 8 - 1; j >= 0; j--)
	{
		if (resXOR & (1 << j))
			i++;
	}
	return (i);
}
