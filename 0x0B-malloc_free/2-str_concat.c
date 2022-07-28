#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: the destination string.
 * @s2: the source string.
 * Return: returns a pointer to s1.
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int index, j = 0, len = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (index = 0; s1[index] || s2[index]; index++)
	{
		len++;
	}
	p = malloc(sizeof(char) * len);

	if (p == NULL)
	{
		return (NULL);
	}
	for (index = 0; s1[index]; index++)
	{
		p[j++] = s1[index];
	}
	for (index = 0; s2[index]; index++)
	{
		p[j++] = s2[index];
	}
	return (p);
}
