#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * matrix of integers.
 * @a: an array to store the integers.
 * @size: the size of the array
 */

void print_diagsums(int *a, int size)
{
	int i = 0, sum1 = 0, sum2 = 0;

	while (i < (size * size))
	{
		if (i % (size + 1) == 0)
		{
			sum1 += *(a + i);
		}
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
		{
			sum2 += *(a + i);
		}
		i++;
	}
	printf("%d, %d\n", sum1, sum2);
}
