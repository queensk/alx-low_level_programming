#include "main.h"

/**
 * *_memcpy - a function that copies memory area.
 * @dest: the variable to store the copied memory.
 * @src: the variable from which the memory area is to copied.
 * @n: the number of memry area to be copied.
 * Return: returns *dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
