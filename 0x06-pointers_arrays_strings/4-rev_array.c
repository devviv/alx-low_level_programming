/**
* reverse_array - reverse elements of an array
*@a: array
*@n: value
* Return: nothing
*/
#include "main.h"
void reverse_array(int *a, int n)
{
int i, j, tab[n];
j = 0;
for (i = (n - 1); i >= 0; i--)
{
tab[j] = a[i];
j++;
}
for (i = 0; i < n; i++)
{
a[i] = tab[i];
}
}
