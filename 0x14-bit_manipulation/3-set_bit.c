#include "main.h"

/**
 * set_bit - set the bit @ index to 1
 *
 * @n: pointer to bit
 *
 * @index: index
 *
 * Return: 1 if it works, -1 if it doesn't
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int ref;
	unsigned long int max;

	max = sizeof(unsigned long int) * 8;
	if (index >= max) /* index can't surpass size of bit */
		return (-1);
	ref = 1 << index; /* Binary with 1 in index and 0 in others */
	*n = *n | ref; /* change the index and keep the rest the same */

	return (1);
}
