#include "main.h"

/**
 * _isdigit - checks if a character is a digit between 0 and 9
 * @c: variable to be tested
 * Return: 1 if true, 0 if false
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
