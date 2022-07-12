#include "main.h"

/**
 * swap_int - swaps to input integers
 * @a: integer input.
 * @b: second integer.
 * @tmp: tempory place holder.
 * 
 * Description: function swaps to variable values.
 * Return: void
 */
void swap_int(int *a, int *b)
{
    int tmp;

    tmp = *b;
    *b = *a;
    *a = tmp;
}
