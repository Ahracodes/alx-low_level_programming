#include "main.h"

/**
 * clear_bit - sets bit to 0
 *
 * @n: number to change the binary for
 *
 * @index: of bit to change
 *
 * Return: 1 if sucess, -1 if not
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int ref, max; /*init reference binary and max */

	max = sizeof(unsigned long int) * 8; /* max size if 8*int */
	if (index >= max)
		return (-1);
	ref = ~(1 << index); /* inverts bits, index bit will be the only 0 */
	*n = *n & ref; /* bit at index will be 0 (not both are 1) */

	return (1);
}
