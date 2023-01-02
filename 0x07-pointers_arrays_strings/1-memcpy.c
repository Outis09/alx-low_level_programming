#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area
 * @dest: memory area
 * @src: memory area
 * @n: number of bytes
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);

	return (dest);
}
