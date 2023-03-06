#include "main.h"

/**
 * _memcpy -copies n bytes from src to dest
 *
 * @n: bytes
 *
 * @src: char source
 *
 * @dest: char destination
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
