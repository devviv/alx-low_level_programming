/**
* reverse_array - reverse elements of an array
*@a: array
*@n: value
* Return: Always 0.
*/
void reverse_array(int *a, int n)
{
int i, j, Tab[n];
j = 0;
for (i = (n - 1); i >= 0; i--)
{
Tab[j] = a[i];
j++;
}
for (i = 0; i < n; i++)
{
a[i] = Tab[i];
}
}
