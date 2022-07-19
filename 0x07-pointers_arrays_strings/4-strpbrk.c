#include "main.h"

/**
 * *_strpbrk - a function that searches
 * a string for any of a set of bytes.
 * @s: the string to be searched.
 * @accept: the a variable that contains
 * bytes to be searched for.
 * Return: a pointer to s that matches one
 * of the bytes in accept or NULL
 * if no bytes is found.
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int pos = 0;
	unsigned int flg = 0;

	while (*(s + i))
	{
		i++;
	}
	pos = i;
	i = 0;

	while (*(accept + i))
	{
		j = 0;

		while (*(s + j))
		{
			if (accept[i] == s[j])
			{
				if (j <= pos)
				{
					pos = j;
					flg = 1;
				}
			}
			j++;
		}
		i++;
	}
	if (flg == 1)
	{
		return &s[pos];
	}
	return ('\0');
}
