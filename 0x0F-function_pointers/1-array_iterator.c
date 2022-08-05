#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - excute a function on array element
 * @array: input integer array
 * @size: size of the array
 * @action: pointer to the function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL && size != 0)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
