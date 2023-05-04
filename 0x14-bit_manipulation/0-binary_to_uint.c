#include "main.h"

/**
 * binary_to_uint - converts binary value to int
 *
 * @b: pointer to the binary
 *
 * Return: decimal or 0 if error
 */

unsigned int binary_to_uint(const char *b)
{
	int x; /* halper to navigate the binary */
	unsigned int dec; /* decimal to find */

	dec = 0;

	if (!b) /* no input binary */
		return (0);

	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != '0' && b[x] != '1') /* non binary input */
			return (0);
		dec <<= 1; /* shift to left by one */
		dec += b[x] - '0';
	}
	return (dec);
}
