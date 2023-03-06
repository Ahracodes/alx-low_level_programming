#include "main.h"
#include <stddef.h>

/**
 * _strchr - gives pointer of the first occurrence of char c
 *
 * @c: char to detect
 *
 * @s: string to analyse
 *
 * Return: NULL or pointer to c
 */

char *_strchr(char *s, char c)
{
	while (c != '\0')
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	return (s);
	return (NULL);
}
