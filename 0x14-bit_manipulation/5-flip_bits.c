#include "main.h"

/**
 * flip_bits - returns nb of bitsthat need to be flipped from n to m
 *
 * @n: nb 1
 *
 * @m: nb 2
 *
 * Return: nb of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int ref; /*declarations*/
	unsigned long int diff;
	unsigned long int max;
	unsigned int x;
	unsigned int id;

	diff = n ^ m; /*init of vars */
	ref = 1;
	max = sizeof(unsigned long int) * 8;
	x = 0;

	for (id = 0; id < max; id++) /*loop while we're in the limit of size */
	{
		if (ref == (diff & ref)) /* checks if all the bits match */
			x++;
		ref <<= 1; /* left shift by 1 */
	}
	return (x);
}
