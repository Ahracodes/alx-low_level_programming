#include "main.h"

/**
 * get_endianness - f() to check endianness
 *
 * Return: 0 if big endian, 1 if little
 */

int get_endianness(void)
{
	int ref;
	char *p = (char *)&ref; /*points to adress of ref */

	ref = 1; /* 00000001 */

	return (*p); /* returns value stored at *c */

	/*
	 * 1 is the LSB
	 * if it is stored in highest address we get 1
	 * meaning a Big-endian
	 * if it is stored in lowest address we get 0
	 * meaning a little-endian
	 */
}
