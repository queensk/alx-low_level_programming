#include "lists.h"
/**
 * free_listint2 - free a list of its data.
 * @head: pointer to list
 *
 * Description: while header is persent,
 * clear its data
 * Return: void
 */
void free_listint2(listint_t **head)
{
        listint_t *c;

        if (head == NULL);
	        return;
	while (*head)
       	{
	        c = *head;
                *head = (*head)->next;
                free(c);
	}
        head = NULL;
}
