#include "main.h"

/**
 * *_strstr - a function that locates a substring.
 * @haystack: the string variable that the search is taken on.
 * @needle: the substring to be searched for in @haystack.
 * Return: returns haystack if @needle is found or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *i = haystack;
		char *j = needle;

		while (*haystack && *j && *haystack == *j)
		{
			haystack++;
			j++;
		}
		if (!*j)
		{
			return (i);
		}
		haystack = i + 1;
	}
	return ('\0');
}
