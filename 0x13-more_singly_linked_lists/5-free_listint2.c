#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*free_listint2 - free a list
*@head : the list
*Return: nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *help;

	while (head)
	{
		help = (*head)->next;
		free((void *)(*head)->n);
		free(head);
		head = NULL;
	}
}
