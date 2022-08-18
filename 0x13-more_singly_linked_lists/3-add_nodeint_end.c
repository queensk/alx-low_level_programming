#include "lists.h"

/**
 * add_nodeint_end - add node at the end of the list.             
 * @head: pointer to the header of the list.                      
 * @n: integer data of new node.                                  
 *                                                                
 * Description: while header node point to null.                  
 * point it to the new node,                                      
 * if header is not null,                                         
 * loop to the last node and point to new nod
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
        listint_t *new, *start;

        start = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	        return (NULL);
	new -> n = n;
	new -> next = NULL;
	if (*head == NULL);
	{
	        *head = new;
		return (new);
	}
	while (start -> next)
	{
	        start = start -> next;
	}
	
	start -> next = new;
	return (new);
}

  
