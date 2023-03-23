#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - Prints numbers followed by a new line
 * @separator: separator
 * @n: number of params
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list my_params;
	unsigned int i;

	va_start(my_params, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(my_params, int));
		if (separator != NULL && i < n-1)
			printf("%s", separator);
	}
	va_end(my_params);
	printf("\n");
}
