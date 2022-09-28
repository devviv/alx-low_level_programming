/**
* _pow_recursion - raise x to the power of y
*@x: value
*@y: value
* Return: x in power y
*/
#include "main.h"
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else
{
return (x * pow(x, y - 1));
}
}
