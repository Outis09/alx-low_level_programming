#include "main.h"
#include <string.h>

/**
 * *_memset - fills memmory with a constant byte
 * @s: pointer to a memory area
 * @n: number of bytes to be filled
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b; unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
