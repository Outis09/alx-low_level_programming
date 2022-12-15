#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks if a character is a digit
 * @c: character
 * Return: 1 is charcter is a digit
 * otherwise 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
