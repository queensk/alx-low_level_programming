#include <stdio.h>
/**
 * main - Prints alphabets in lower case and uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 'a';
	int y = 'A';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	while (y <= 'Z')
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
