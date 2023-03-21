#include <stdio.h>
#include <stdlib.h>

void _putchar(char);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

/*functions for 101-mul.c */

/**
 * error_exit - prints error with _putchar
 * and exits with 98
 *
 * Return: Error 98 and exit(98)
 */

int error_exit(void)
{
	char *err;
	int i;

	err = "Error";
	for (i = 0; err[i] != '\0'; i++)
		_putchar(err[i]);
	_putchar('\n');
	exit(98);
}

/**
 * check_number - checks if string has only
 * numbers
 *
 * @str: string to check
 *
 * Return: 0 is true 1 if false
 */

int check_number(char *str)
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (1);
		str++;
	}
	return (0);
}
