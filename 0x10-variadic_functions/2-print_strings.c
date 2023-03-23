#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints list of strings followed by a new line
 * @separator: separator for different strings
 * @n: number of params
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list my_params;
	unsigned int i;
	char *tmpStr;

	va_start(my_params, n);
	for (i = 0; i < n; i++)
	{
		tmpStr = va_arg(my_params, char *);
		if (tmpStr == NULL)
			printf("nil");
		else
			printf("%s", tmpStr);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(my_params);
	printf("\n");
}
