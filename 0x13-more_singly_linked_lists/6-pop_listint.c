#include "lists.h"
/**
 * pop_listint - delete the head node
 *@head: point to the list
 *Return: head node's data
 */
int pop_listint(listint_t **head)
{
listint_t *t;
int n;

t = *head;
        if (t == NULL)
                return(0);
*head = t->next;
n = t->n;
free(t);
return (n);
}
