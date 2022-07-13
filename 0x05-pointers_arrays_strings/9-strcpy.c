#include "main.h"
/**
 *_strcpy - copies a string pointed to be src,
 *inlcuding the \0 charcher of the buffer
 *@dest: the copied string
 *@src: the pointe to the string to be copied.
 *
 *Description:  a function that copies the string pointed to by src
 *Return: string.
 */
char *_strcpy(char *dest, char *src)
{
  int len = 0, i;
  for (; src[len] != '\0'; len++)
    ;
  for (i = 0; i<len; i++)
    dest[i] = src[i];
  dest[i] = '\0';

  return (dest);
}
