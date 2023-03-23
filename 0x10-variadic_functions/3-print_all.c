#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints all data types
 * @format: list of argume nts
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list my_params;
	int i = 0, p_ok = 0;
	char *s;

	va_start(my_params, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", (char)va_arg(my_params, int));
				p_ok = 1;
				break;
			case 'i':
				printf("%i", va_arg(my_params, int));
				p_ok = 1;
				break;
			case 'f':
				printf("%f", (float)va_arg(my_params, double));
				p_ok = 1;
				break;
			case 's':
				s = va_arg(my_params, char*);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
				p_ok = 1;
				break;
		}
		if (format[i + 1] != '\0' && p_ok == 1)
			printf(", ");
		p_ok = 0;
		i++;
	}
	printf("\n");
	va_end(my_params);
}
