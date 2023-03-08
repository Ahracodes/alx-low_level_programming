#include "main.h"

/**
 * _pow_recursion - gives value of x powered by y
 *
 * @x: int
 *
 * @y: int
 *
 * Return: x powered by y
 */

int _pow_recursion(int x, int y)
{
	int b;

	if (y == 0)
	{
		return (1);
	}

	else if (y < 0)
	{
		return (-1);
	}

	else
	{
		b = x * _pow_recursion(x, y - 1);
		return (b);
	}
}
