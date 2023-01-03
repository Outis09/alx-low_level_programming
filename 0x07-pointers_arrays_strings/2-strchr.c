#include "main.h"
#include <stdlib.h>

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: pointer to the first occurrence of the character,
 * Null if the string is not found
 */
char *_strchr(char *s, char c)
{
	char *k;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			k = &s[i];
			return (k);
		}
	}

	return (NULL);
}
