#include "variadic_functions.h"

/**
 * sum_them_all - perform the sum of all its parameters
 * @n: number of values
 *
 * Return: Result
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list my_list;
	int sum = 0;
	unsigned int i;

	va_start(my_list, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(my_list, int);
	}
	va_end(my_list);
	return (sum);
}
