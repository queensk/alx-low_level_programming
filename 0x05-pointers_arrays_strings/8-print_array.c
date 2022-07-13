#include "main.h"
#include <stdio.h>

/**
 *print_array - prints n elements of an array of integers,
 *followed by a new line.
 *@a: the array input.
 *@b: the number of elements of the array to print.
 *
 *Description: prints the number of elemens for an array
 *Return: void
 */
void print_array(int *a, int n)
{
  int i = 0, j = 0;
  for(; a[j] != '\0'; j++)
    ;
  for (; i<n; i++)
    {
      if (i ==0)
	printf("%d", a[i]);
      else
	printf(", %d", a[i]);
    }
  printf("\n");
}
