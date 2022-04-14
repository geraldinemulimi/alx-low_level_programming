#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all - returns the sum of all of all its parameters
 * @n: number of arguments
 * Return: the resulting sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int a;
	int sum = 0;
	va_list list;

	if (n == o)
	{
		return (0);
	}

	va_start(list, n);

	for (a = 0; a < n; a++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);

	return (sum);
}

