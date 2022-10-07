#include "main.h"
/**
 * times_table - this programm print the time table of 9
 *
 *
 *
 * Return: num
 */
void times_table(void)
{
int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if ((i * j) >= 10)
			{
				_putchar(' ');
				_putchar(((i * j) / 10) + '0');
				_putchar(((i * j) % 10) + '0');
				if (j != 9)
				{
					_putchar(',');
				}
			}
			else
			{
				if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar((i * j) + '0');
				if (j != 9)
				{
					_putchar(',');
				}
			}
		}
		_putchar('\n');
	}
}
