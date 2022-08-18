#include "lists.h"

/**
 * free_listint - free list
 * @head: pointer to node header
 * 
 * Description: while header does not point to null,
 * free memory of the node
 * Return: void
 */
void free_listint(lisint_t *head)
{
        listint_t *check, *c;
        c = head;
	while (c != NULL)
	{
	        check = c->next;
	        free(c);
                c = check;
	}
}
