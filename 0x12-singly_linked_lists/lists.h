#ifndef LIST_H_
#define LIST_H_
#include <stdio.h>
#include <unistd.h>
/**
* struct list - a structure for a list creating
*@str : string
*@len : integer
*@next : for the next node
*/
typedef struct list
{
char *str;
unsigned int len;
struct list *next;
} list_t;
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
void before_main(void) __attribute__ ((constructor));
#endif
