#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - thi program prints every minute
 *
 * @n: integer value
 *
 * Return: minutes
 */
void print_to_98(int n)
{
int i;
if (n < 98)
{
for (i = n; n < 98; n++)
{
printf("%d, ", i);
}
printf("98");
}
printf("\n");
else if (n > 98)
{
for (i = n; i > 98; i--)
{
printf("%d, ", i);
}
printf("\n");
printf("98");
printf("\n");
}
else
{
printf("98");
}
}
