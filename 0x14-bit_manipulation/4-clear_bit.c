#include "main.h"

/**
 * clear_bit - sets the bit at a given index
 * @n: pointer to the number
 * @index: index of bit to set
 *
 * Return: 1 if it worked, -1 if fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long newValue;

	if (index > 31)
		return (-1);
	newValue = *n | (1 << index);
	newValue = newValue & (~(1 << index));
	*n = newValue;
	return (1);
}
