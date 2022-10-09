#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *@min: value
 *@max: value
 * Return: pointer
 */

int *array_range(int min, int max)
{
int **ar;
int i;
int j;
i = 0;
if (width > 0 && height > 0)
{
*ar = (int *)malloc((height + width) * sizeof(int));
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
ar[i][j] = 0;
}
}
return (ar);
}
return (0);
}
