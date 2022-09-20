/**
* print_array - prints elements of an array
*@a: array
*@n: value
* Return: nothing
*/
#include "main.h"
void print_array(int *a, int n)
{
int i = 0;
while (i < n)
{
if (i < n - 1)
{
printf("%d, ", a[i]);
}
else
{
printf("%d", a[i]);
}
i++;
}
}
