#include "main.h"

/**
 * print_rev - prints revese of a string followed with an new line.
 * @s: the input string.
 * 
 * Description: the first while loop finds the length of the string.
 * The second while loop reveses the string characters.
 * Retrun: void.
 */
void print_rev(char *s)
{
  int count = 0;
  while (*s != '\0')
    {
      s++;
      count++;
    }
  while (count > 0)
    {
      s--;
      _putchar(*s);
      count--;
    }
  _putchar('\n');
}
