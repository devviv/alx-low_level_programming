#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
* print_strings - prints string
* @separator: separe numbers
* @n: number of string
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		{
			printf("%s", (char *)(va_arg(args, int)));
		}
		else
		{
			printf("%s%s", separator, (char *)(va_arg(args, int)));
		}
	}
	printf("\n");
	va_end(args);
}
