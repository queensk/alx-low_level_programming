#include "main.h"
/**
 * print_alphabet_x10 - prints alpphabets a-z ten times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i = 1;
	char j;

	while (i <= 10)
	{
		j = 'a';

		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
