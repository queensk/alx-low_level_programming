#include "main.h"
/**
 * print_last_digit - creats a function that prints the last didgit of numbers
 *
 * @n: variable subjected to test
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
