# alx-low_level_programming
## 0x17-doubly_linked_lists
### 0-print_dlistint.c

> Write a function that prints all the elements of a dlistint_t list.
- Prototype: size_t print_dlistint(const dlistint_t *h);
- Return: the number of nodes
- Format: see example
```
julien@ubuntu:~/0x17. Doubly linked lists$ cat 0-main.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    dlistint_t *new;
    dlistint_t hello = {8, NULL, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        dprintf(2, "Error: Can't malloc\n");
        return (EXIT_FAILURE);
    }
    new->n = 9;
    head->prev = new;
    new->next = head;
    new->prev = NULL;
    new->prev = NULL;
    n = print_dlistint(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_d listint.c -o a

julien@ubuntu:~/0x17. Doubly linked lists$ ./a 
9
8
-> 2 elements

```