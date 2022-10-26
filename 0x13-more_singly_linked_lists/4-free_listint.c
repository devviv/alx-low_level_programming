#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*add_nodeint_end - add a node at ent of list
*@head : the list
*@n : the element to be added
*Return: the list
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *help;

	while (head)
	{
		help = head->next;
		free(head);
		head = help;
	}
}
