# include "lists.h"
/**
 * add_nodeint - add node to list.
 * @head: point to node.
 * @n: int data of the node.
 *
 * Description: next of new mode point to header,
 * make new node the head.
 * Return: new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
        listint_t *new;

        new = malloc(sizeof(listint_t));
	if (new == NULL)
	  return (NULL);
	
	new -> next = *head;
	new -> n = n;
	*head = new;
	return (new);
}
