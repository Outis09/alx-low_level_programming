#include "main.h"

/**
 * *string_toupper - convert all lowercase in a string to uppercase
 *
 * @c: pointer to string
 * Return: all characters of the string in uppercase
 */
char *string_toupper(char *c)
{
	char s;

	s = strupr(c);

	return (s);
}
