#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* get_nodeint_at_index - get a node at given position
*@head : the list
*@index : the position
*Return: the node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	for (i = 0; i < (index - 1); i++)
	{
		head = head->next;
	}
	return (head);
}
