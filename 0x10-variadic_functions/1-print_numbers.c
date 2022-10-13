#include <stdio.h>
#include <stdarg.h>
/**
* print_numbers - prints numbers
* @separator: separe numbers
* @n: number of numbers
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		{
			printf("%u\n", va_arg(args, int));
		}
		else
		{
			printf("%u%s\n", va_arg(args, int), separator);
		}
	}
	va_end(args);
}
