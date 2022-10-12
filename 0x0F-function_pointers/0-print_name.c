#include <stdio.h>
#include "function_pointers.h"
/**
* print_name - prints a name
* @name: character
* @f: a function
* Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
	if ( name == NULL || f == NULL)
	{
		return (0);
	}
	(*f)(name);
}