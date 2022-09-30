#ifndef _LISTS_
#define _LISTS_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dlistint_s - double linked lists
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 * 
 * Description: doubly linked list node structure
 *
 */
typedef struct dlistint_s
{
        int n;
        struct dlistint *prev;
        struct dlistint *next;
} dlistint_t

size_t print_dlistint(const dlistint_t *h);

#endif
