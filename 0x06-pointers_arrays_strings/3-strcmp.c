#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: pointer to a string
 * @s2: pointer to a string
 *
 * Return: 0 if s1 and s2 are equal,
 * negative value if s1 is less than s2,
 * and positive value if s1 is more than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = strcmp(s1, s2);

	return (i);
}
