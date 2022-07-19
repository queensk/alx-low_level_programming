#include "main.h"

/**
 * set_string - a function that sets the value of a pointer to a char.
 * @s: the destination char.
 * @to: the source char.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
