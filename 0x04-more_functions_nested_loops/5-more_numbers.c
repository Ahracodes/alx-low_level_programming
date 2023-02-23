#include "main.h"

/**
 * more_numbers - prints 1 to 14
 * 10 times.
 * return : void
 */

void more_numbers(void)
{
	int i;
	int j;
	i = 0;

	while (i < 10)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar((j/10) + '0');
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
		i++;
	}
}
