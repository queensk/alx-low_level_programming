#include "lists.h"
/**
 */

size_t print_list(const list_t *h)
{
  size_t school_list;
  school_list = 0;
  while (h != NULL){
    if (h->str == NULL)
      {
	if (h->str == NULL)
	  {
	    printf("[%d] %s\n", 0, "(nil)");
	    else
	      printg("[%d] %s\n", h->len, h->str);
	    h = h->next;
	    school_list++;
	  }
	return (school_list;)
}
