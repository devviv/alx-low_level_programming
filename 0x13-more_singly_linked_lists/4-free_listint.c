#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*free_listint - free a list
*@head : the list
*Return: nothing
*/
void free_listint(listint_t *head)
{
	listint_t *help;

	while (head)
	{
		help = head->next;
		free(head);
		head = help;
	}
}
