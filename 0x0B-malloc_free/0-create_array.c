#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - makes array pf chars and initializes it
 *
 * @size : size of wanted array
 *
 * @c : starting character
 *
 * Return: pointer to an array or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *pt;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	pt = malloc(size * sizeof(char));

	if (pt == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; i <= size ; i++)
	{
		pt[i] = c;
	}

	return (pt);
}
