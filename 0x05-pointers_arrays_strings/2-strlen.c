#include "main.h"

/**
 *-strlen - counts the characers in a string
 * @s: the input string
 *
 * Description: function takes a string as parameter
 * @l: keeps trach of the lenth.
 * Return: return the the lenth of input string.
 */
int _strlen(char *s)
{
  int l = 0;

  while(*s != '\0')
    {
      l++;
      s++;
    }
  return (l);
}
