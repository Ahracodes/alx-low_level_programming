#include "main.h"

/**
 * print_alphabetx10 : entry
 * Description: printing alphabet ten times
 * return: void 
 */

void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
	{
		for(j = 'a'; j <= 'z'; j++)
		
			_putchar(j);

		_putchar('\n');
	}
}

