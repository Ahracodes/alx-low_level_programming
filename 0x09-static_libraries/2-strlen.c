#include "main.h"
/**
 * _strlen - return lenght of a string
 * @s: char to check
 * Return: a
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}