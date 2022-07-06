#include "main.h"
/**
 * _abs - computes absolute value of an integer
 *
 * @i: the integer to be converted
 *
 * Return: Always 0 (Success)
 */
int _abs(int i)
{
	if (i < 0)
	{
		i = i * -1;
	}
	return (i);
}
