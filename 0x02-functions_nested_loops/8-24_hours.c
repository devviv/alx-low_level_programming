#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - thi program prints every minute
 *
 * Return: minutes
 */
void jack_bauer(void)
{
	int i, j, k, l, n, m;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 5; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					if (i == 2 && (j >= 4 && j <= 9))
					{
						continue;
					}
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar('\n');
				}
			}
		}
	}
}
