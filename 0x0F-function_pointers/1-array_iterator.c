#include "functions_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array
 * @array: array to iterate over
 * @size: size of the array
 * @action: pointer to the function array_iterator
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;

	for (a = 0; a < size; a++)
		action(array[a]);
}
