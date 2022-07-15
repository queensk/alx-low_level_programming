#include "main.h"

/**
 * *_strncat - a function that concatenates two strings using
 * at most n bytes from @src
 * @dest: first variable that holds strings to be concatenated
 * @src: second variable tha holds string to be concatenated
 * @n: the number of characters to be taken from src
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
	{
		dest_len++;
	}
	for (index = 0; src[index] && index < n; index++)
	{
		dest[dest_len++] = src[index];
	}
	return (dest);
}
