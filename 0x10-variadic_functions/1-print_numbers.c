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
			printf("%u", va_arg(args, int));
		}
		else
		{
			printf("%u%s", va_arg(args, int), separator);
		}
	}
	if (n)
	{
		printf("%d\n", va_arg(args, int);
	}
	else
	{
		printf("\n");
	}
	va_end(args);
}
