#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *@width: value
 *@height: value
 * Return: a pointer
 */

int **alloc_grid(int width, int height)
{
int **ar;
int i;
int j;
i = 0;
if (width > 0 && height > 0)
{
/**ar = (int *)malloc((height + width) * sizeof(int));*/
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
