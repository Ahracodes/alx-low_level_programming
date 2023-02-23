#include "main.h"

/**
 * _isdigit - to detect digits
 * @c: the input
 *  
 * Return: 1 if input is a digit, 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}	
