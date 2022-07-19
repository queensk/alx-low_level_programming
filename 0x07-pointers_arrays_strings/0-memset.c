#include "main.h"

/**
 * *_memset - a function that fills memory with a constant byte.
 * @s: a pointer variable that gets filled with the bytes.
 * @b: the variable that holds the bytes to be filled.
 * @n: the number of bytes to be filled.
 * Return: Returns a pointer to the memory area @s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
