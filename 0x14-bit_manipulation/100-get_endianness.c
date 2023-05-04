#include "main.h"

/**
 * get_endianness - f() to check endianness
 *
 * Return: 0 if big endian, 1 if little
 */

int get_endianness(void)
{
	int ref;
	char *p = (char *)&ref; /*pointer to ref adress*/

	ref = 1; /* binary : 00000001 */
	return (*p); /* returns value stored in *p */

	/*
	 * 1 being the LSB
	 * if it is stored in the highest adress we get 1
	 * ==> Big endian
	 * if it is stored in lowest adress we get 0
	 * ==> Little endian
	 */
}
