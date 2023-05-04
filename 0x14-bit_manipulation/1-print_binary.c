#include "main.h"

/**
 * print_binary - prints binary to a given decimal
 *
 * @n: number to convert
 *
 * Return: binary form of n
 */

void print_binary(unsigned long int n)
{
	if (n > 0) /* numbers should be more than 0 */
	{
		if (n >> 1) /* checks for more bits to print */
			print_binary(n >> 1); /*recursive function */
		_putchar((n & 1) + '0');
	}

	else
		_putchar('0'); /* number 0 */
}
