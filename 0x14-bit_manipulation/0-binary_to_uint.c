# include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string with a binary number.
 *
 * Description: there is one or more chars in the string b that is not 0 or 1
 * Return: return convarted numbers.
 */
unsigned int binery_to_unit(const char *b)
{
        unsigned int converted_number = 0, position = 1;
        int i = 0;

	if (!b)
	        return (0);

        while (b[i])
	  i++;

        i--;

        for (; i >= 0; i--, position *=2)
	{
	        if (b[i] < '0' || b[i] > '1')
		        return (0);

		converted_number += (position * (b[i] - '0'))
        }

	return (converted_number);
}
