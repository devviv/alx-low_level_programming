/**
* factorial - return a factorial of number
*@n: the number
* Return: the factorial
*/
#include "main.h"
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
