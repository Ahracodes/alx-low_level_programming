#include "main.h"

/**
 * set_bit - sets bit in index to 1
 *
 * @n: pointer to bit
 *
 * @index: id to change
 *
 * Return: 1 if it works, -1 if it doesn't
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int ref;
	unsigned long int max;

	max = sizeof(unsigned long int) * 8;
	if (index >= max) /* index shouldn't surpass size */
		return (-1);
	ref = 1 << index; /* Binary with 1 in given index and 0 in other*/
	*n = *n | ref; /* change the index and keep the rest intact */

	return (1);
}
