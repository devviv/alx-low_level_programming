/**
 * swap_int - swap two integers
 *@a: value
 *@b: value
 * Return: nothing
 */
#include "main.h"
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
