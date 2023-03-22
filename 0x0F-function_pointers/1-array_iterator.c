#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each elt of array
 * @array: array of elements
 * @size: size of array
 * @action: function pointer to action to be executed
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
