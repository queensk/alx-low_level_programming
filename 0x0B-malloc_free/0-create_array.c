#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters and initializes it
 * with a specific character.
 * @size: the size of the array.
 * @c: the array variable to be created.
 * Return: Returns NULL if size = 0. Returns a pointer to c.
 */

char *create_array(unsigned int size, char c)
{
	size_t i;
	char *p;

	p =  malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	else if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);

}
