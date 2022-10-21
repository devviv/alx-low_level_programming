#include <stdlib.h>
#include "lists.h"
/**
* free_list - add a node at the beginning of a list
*@head : free a list
*Return: nothing
*/
void free_list(list_t *head)
{
	while (head)
	{
		if (head->str)
		{
			free(head->str);
		}
	free(head->next);
	}
}
