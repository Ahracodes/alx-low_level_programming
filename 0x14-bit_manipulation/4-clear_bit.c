#include "main.h"

/**
 * clear_bit - sets a bit at given index to 0
 *
 * @n: nb whose binary to change
 *
 * @index: index to change value of
 *
 * Return: 1 if it works and -1 if not
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int ref, max; /* init reference binary and max */

	max = sizeof(unsigned long int) * 8; /* the max size is 8*int */
	if (index >= max)
		return (-1);

	ref = ~(1 << index); /* inverts bits, only index bit will be 0 */
	*n = *n & ref; /* bit at index will be 0 since they're not both 1 */

	return (1);
}
