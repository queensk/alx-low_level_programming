#include <stdio.h>
/**
 * main - Prints alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
