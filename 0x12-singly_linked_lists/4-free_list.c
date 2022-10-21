#include <stdlib.h>
#include "list.h"
/**
* free_list - add a node at the beginning of a list
*@head : free a list
*Return: nothing
*/
void free_list(list_t *head)
{
	free(head);
}
