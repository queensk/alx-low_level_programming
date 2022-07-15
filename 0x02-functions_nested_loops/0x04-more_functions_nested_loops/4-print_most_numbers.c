#include "main.h"

/**
 * print_most_numbers - prints 0 - 9 except 2, 3
 * Description: prints number
 * Return: void 
 */

void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
		i++;
	}
	_putchar('\n');
}
