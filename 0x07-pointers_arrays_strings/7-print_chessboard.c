#include "main.h"

/**
 * print_chessboard - a function that prints cheassboard.
 * @a: an array of characters.
 * Return: returns void.
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;

	while (a[i][7])
	{
		j = 0;

		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		i++;
		_putchar('\n');
	}
}
