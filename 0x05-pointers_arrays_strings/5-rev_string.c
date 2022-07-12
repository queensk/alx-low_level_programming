#include "main.h"

/**
 * rev_string - function reverses a string.
 * @s: argument for input string.
 *
 * Description: the first while loop trough the string.
 * Return: void.
 */
void rev_string(char *s)
{
  char *t = s;
  char n[1000];
  short c = 0;

  while (*s != '\0')
    {
      n[c] = *s;
      s++;
      c++;
    }
  c = 0;

  while (s>t)
    {
      s--;
      s* = n[c];
      c++;
    }
}
