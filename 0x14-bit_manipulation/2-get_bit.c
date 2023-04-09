#include "main.h"

/**
 * get_bit - functions that returns bit of a given id
 *
 * @n: the int to analyse
 *
 * @index: the id of bit to return
 *
 * Return: index of -1 if failure
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int max;
	unsigned long int comp;

	max = sizeof(unsigned long int) * 8;

	if (index >= max)
		return (-1); /*index should not be larger than binary size*/

	comp = 1 << index; /*gives a binary with 1 only in index pos */
	if ((n & comp) == comp) /* if they are equal it means the bit is 1 */
		return (1);
	else
		return (0);
}
