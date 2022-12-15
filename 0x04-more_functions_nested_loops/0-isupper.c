#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isupper - checks if a character is uppercase
 * @c: int type number
 * Return: 1 if character is uppercase, otherwise 0
 */

int _isupper(int c)
{
	if (isupper(c))
		return (1);

	return (0);
}
