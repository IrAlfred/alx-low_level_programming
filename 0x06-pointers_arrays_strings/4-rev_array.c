#include "main.h"

/**
 * reverse_array - reverses the content of a array
 * @a: array
 * @n: number of elements of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp;

	while (i < n/2)
	{
		tmp = *(a + i);
		*(a + i) = *(a + (n - (i + 1)));
		*(a + (n - (i + 1))) = tmp;
		i++;
	}
}
