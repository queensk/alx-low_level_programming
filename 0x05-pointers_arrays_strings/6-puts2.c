#include "main.h"

/**
 * puts2 - prints outputs of a string
 * @s: input string
 *
 * Description: prints every other character of a string.
 * Return: void
 */
void puts2(char *str)
{
  int i, j = 0;

  while (str[i] != '\0')
    {
      i++;
    }
  while (j <i)
    {
      _putchar (str[j]);
      j = j + 2;
    }
  _putchar('\n');
}
