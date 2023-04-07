#include "main.h"

/**
 * set_bit - sets the bit at a given index
 * @n: pointer to the number
 * @index: index of bit to set
 *
 * Return: new number
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long newValue;

	newValue = *n | (1 << index);
	*n = newValue;
	return (newValue);
}
