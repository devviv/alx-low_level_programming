#include <stdlib.h>
#include "lists.h"
/**
* free_list - add a node at the beginning of a list
*@head : free a list
*Return: nothing
*/
void free_list(list_t *head)
{
	list_t *help;

	while (head)
	{
		help = head->next;
		free(head->str);
		free(head);
		head = help;
	}
}
