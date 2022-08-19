#include "main.h"

/**
 * get_bit - Get the bit value at a given index.
 * @n: number of bits
 * @index: index to get the bits form.
 *
 * Return: return the value of bit at a given index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
  if (index > (sizeof(n) * 8))
    return (-1);

  return ((n >> index) & 1);
}
