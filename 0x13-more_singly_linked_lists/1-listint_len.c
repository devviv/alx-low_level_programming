#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*listint_len - print a list
*@h : the list
*Return: number the length
*/
size_t listint_len(const listint_t *h)
{
	size_t number;

	number = 0;
	while (h)
	{
		number++;
		h = h->next;
	}
	return (number);
}
