#include <stdio.h>
#include <ctype.h>

/**
 * _isdigit - checks if a character is a digit
 * @c: character
 * Return: 1 is charcter is a digit
 * otherwise 0
 */

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);

	return (0);
}
