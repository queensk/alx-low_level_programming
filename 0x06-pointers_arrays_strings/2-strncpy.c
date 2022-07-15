#include "main.h"

/**
 * *_strncpy - copies a string using at least n bytes or number
 * @dest: the variable to be appended a @src string
 * @src: the variable to be concatenated to the end of @dest
 * @n: the max number of bytes or characters copied from @src
 * Return: A pointer to the resulting dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
