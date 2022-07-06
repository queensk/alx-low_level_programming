#include "main.h"
/**
 * _isalpha - checks if a character is lowercase or uppercase.
 *
 * @c: the character subjected to test.
 *
 * Return: 1 if condition is true, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
