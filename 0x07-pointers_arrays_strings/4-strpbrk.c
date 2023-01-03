#include "main.h"
#include <string.h>

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string
 * @accept: string
 * Return: pointer to the byte in s that matches one of the bytes in
 * accept, NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, x;
	char *a;

	for (i = 0; s[i] != '\0'; s++)
	{
		for (x = 0; accept[x] != '\n'; x++)
		{
			if (s[i] == accept[x])
			{
				a = &s[i];
				return (a);
			}
		}
	}
	return (0);
}
