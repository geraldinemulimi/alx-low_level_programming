#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of all types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int a = 0;
	char *b, *sep = "";

	va_list list;

	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, int));
					break;
				case 's':
					b = va_arg(list, char *);
					if (b == NULL)
						b = "(nil)";
					printf("%s%s", sep, b);
					break;
				default:
					a++;
					continue;
			}
			sep = ", ";
			a++;
		}
	}

	printf("\n");

	va_end(list);
}
