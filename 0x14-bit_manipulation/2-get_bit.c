#include "main.h"

/**
 * get_bit - returns bit at given index
 *
 * @n: int to analyse
 *
 * @index: index
 *
 * Return: index, 1 if failure
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int max;
	unsigned long int comp;

	max = sizeof(unsigned long int) * 8;

	if (index >= max)
		return (-1); /* index can't be larger than binary size */
	comp = 1 << index; /* binary with 1 in index ONLY */
	if ((n & comp) == comp) /* if equal then the bit is 1 */
		return (1);
	else
		return (0);
}
