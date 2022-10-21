#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "list.h"
/**
* list_len - find s length of a list
*@h : the list
*Return: the length of list
*/
size_t list_len(const list_t *h)
{
	h = malloc(sizeof(list_t));
	size_t length;

	if (h != NULL)
	{
		while (h != NULL)
		{
			length++;
			h = h->next;
		}
	}
	(unsigned long)length;
	return (length);
}
