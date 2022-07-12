#include "main.h"

/**
 * _puts - prints a string followed by a new line.
 * @str: the string input.
 *
 * Description: the while loops thourgh eahc charcher in the string.
 * Retrurn: void.
 */
void _puts(char *str)
{
  while (*str != '\0')
    {
      _putchar(*str);
      str++;
    }
    _putchar('\n');
}
