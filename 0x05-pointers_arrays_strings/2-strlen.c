#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: - variable of type str
 * Return: length of string
 */
int _strlen(char *s)
{
	int len; /* create variable len */

	len = strlen(*s); /* assign length of string s to len */

	return (len);
}
