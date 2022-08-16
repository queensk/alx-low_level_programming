#include "lists.h"

/**
 * print_listint - print all element in a list.
 * @h: head pointer in a list;
 *
 * Description: while the header exists loop through the lists,
 * increment the book_list, and pint the header to the next.
 * Return: size of the list
 */
size_t print_listint(const listint_t *h)
{
         size_t book_list = 0;

	 while (h)
	 {
	         printf("%d\n", h -> n);
		 book_list++;
		 h = h -> next;
	 }
	 return (book_list);
}
