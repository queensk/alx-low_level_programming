#include "lists.h"
/**
 * print_list - prints all the elements of a list.
 * @h: single linked list to be printed.
 *
 * Description: The while loop checks if the list is null,
 * if the head string points to null print its content,
 * else it prints out the content of the list.
 * Return: number of elements in the list.
 */

size_t print_list(const list_t *h)
{
          size_t school_list;
          school_list = 0;
          while (h != NULL)
	  {
	          if (h->str == NULL)
        	  printf("[%d] %s\n", 0, "(nil)");
	    else
	          printg("[%d] %s\n", h->len, h->str);
	    h = h->next;
	    school_list++;
	  }
	return (school_list;)
}
