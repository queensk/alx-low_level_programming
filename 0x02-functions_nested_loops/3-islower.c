#include "main.h"
/**
 * _islower - checks for a lowercase character
 *
 * @c: variable to be checked whether it is lowercase
 *
 * Return: 1 if c is lowercase, otherwise 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
