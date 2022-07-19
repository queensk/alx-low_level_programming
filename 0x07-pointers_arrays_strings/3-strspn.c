#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: the string that is attached to the substring @accept.
 * @accept: the substring that is attached to @s.
 * Return: the number of bytes in accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int i;

	while (*s)
	{
		i = 0;
		while (accept[i])
		{
			if (*s == accept[i])
			{
				len++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (len);
			}
			i++;
		}
		s++;
	}
	return (len);
}
