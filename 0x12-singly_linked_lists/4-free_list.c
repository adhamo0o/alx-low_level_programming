#include "lists.h"

/**
* free_list - function frees a list_t list
* @head: first element in linked list
*/
void free_list(list_t *head)
{
list_t *x = head;
list_t *next;
while (x != NULL)
{
next = x->next;
free(x->str);
free(x);
x = next;
}
}
