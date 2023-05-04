#include "main.h"

/**
 * flip_bits - returns nb of bits to flip to get from n to m
 *
 * @n: first number
 *
 * @m: second number
 *
 * Return: nb of bits to flip
 */

signed int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int ref, diff, max;
	unsigned int x, id;

	diff = n ^ m;
	ref = 1;
	max = sizeof(unsigned long int) * 8;
	x = 0;

	for (id = 0; id < max; id++) /* while limit of size respected */
	{
		if (ref == (diff & ref)) /* checks if all the bits match */
			x++;
		ref <<= 1; /* left shift */
	}
	return (x);
}
