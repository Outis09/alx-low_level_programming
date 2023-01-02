#include "main.h"
#include <string.h>

/**
 * strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: pointer to the first occurrence of the character,
 * Null if the string is not found
 */
char *_strchr(char *s, char c)
{
	char *k;

	k = strchr(s, c);

	return (k);
}
