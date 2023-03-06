#include "main.h"

/**
 * _memset - fills n bytes with constant byte b
 * @b : char
 * @n : int
 * @s char
 * Return: pointer to memory area of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	
	return (s);
}
