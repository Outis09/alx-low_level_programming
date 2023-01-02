#include "main.h"
#include <string.h>

/**
 * *_memset - fills memmory with a constant byte
 * @s: pointer to a memory area
 * @b: constant byte
 * @n: number of bytes to be filled
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
