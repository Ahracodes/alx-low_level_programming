#include "main.h"

/**
 * print_binary - prints binary rep of a nb
 *
 * @n: int, the number to convert.
 *
 * Return: binary form of n
 */

void print_binary(unsigned long int n)
{
	if (n > 0) /* for numbers that aren't 0 */
	{
		if (n >> 1) /* check if there are more bits to print */
			print_binary(n >> 1); /* recursive function */

		_putchar((n & 1) + '0');
	}

	else
		_putchar('0');
}
