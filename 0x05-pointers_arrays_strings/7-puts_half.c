#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 *@str: input string.
 *
 * Description: a function that prints half of a string, followed bya new line
 *Return: void
 */
void puts_half(char *str)
{
  int i = 0, j;

  for (; str[i] != '\0'; i++)
    ;

  if (i % 2)
    {
      j = (i-1)/2;
      for (; j <  (i - 1); j++ )
	_putchar(str[j + 1]);
    }
  else
    {
      j = i/2;
      for (; j < i; j++)
	_putchar(str[j]);
    }
  _putchar(10);
}
