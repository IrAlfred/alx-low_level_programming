#include "main.h"

/**
 * swap_int - Function to swap values of two integers
 * @a: first variable
 * @b: second variable
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
	c = 0;
}
