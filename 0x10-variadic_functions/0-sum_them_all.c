#include <stdio.h>
#include <stdarg.h>
/**
* sum_them_all - sum parsmeters
* @n: number of parameters
* Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	if (n == 0)
	{
		return (sum);
	}
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
