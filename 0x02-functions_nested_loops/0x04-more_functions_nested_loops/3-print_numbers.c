#include "main.h"

/**
 * print_numbers - prints numbers between 0 to 9.
 * Return: void
 */

void print_numbers(void)
{
	char i = 0;

	while (i <= 9)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
