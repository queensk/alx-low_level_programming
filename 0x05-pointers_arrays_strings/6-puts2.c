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
  int i;
  for(i = 0; str[i] != '\0'; i++)
    if(!(i%2))
      _putchar(str[i]);
  _putchar(10);
}
