#include <stdio.h>
#include "function_pointers.h"
/**
* array_iterator - excute a array
* @array: an array
* @size: size of the array
* @action: function
* Return: nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!action || !array)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
