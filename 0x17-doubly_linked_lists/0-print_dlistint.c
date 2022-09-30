#include "lists.h"

/**
 * print_dilistint - prints all ememenst of,
 * double liked list dlistint_t
 *
 * @h: header of the list
 * Return: the number of nodes in double liksed list
 */
size_t print_dlistint(const dlistint_t *h)
{
        int count;
	count = 0;

	if (h == NULL)
	        return (count)
	
        while (h->prev != NULL)
	        h = h->prev
		  
	while (h != Null)
	{
	        printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
