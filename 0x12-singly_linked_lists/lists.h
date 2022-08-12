#ifndef _LISTS_
#define _LISTS_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * S
 */
typedef struct list_s
{
        char *str;
        usigned int len;
        struct list_s *next;
} list_;

size_t print_list(const list_t *h);
