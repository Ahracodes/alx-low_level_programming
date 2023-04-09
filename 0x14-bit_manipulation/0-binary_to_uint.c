#include "main.h"

/**
 * binary_to_uint - converts a binary to an int
 *
 * @b: pointer to binary
 *
 * Return: decimal output after conversion, 0 if error
 */

unsigned int binary_to_uint(const char *b)
{
	int x; /* index to navigate binary */
	unsigned int dec; /* decimal we're looking for */

	dec = 0;

	if (!b) /* no binary provided */
		return (0);

	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != '0' && b[x] != '1') /*input isn't binary */
			return (0);

		dec <<= 1; /* left shift by one position*/
		dec += b[x] - '0';
	}
	return (dec);
}
