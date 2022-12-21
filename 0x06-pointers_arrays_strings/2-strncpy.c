#include "main.h"

/**
 * *_strncpy - copies a string
 *
 * @dest: pointer to a string
 * @src: pointer to a string
 * @n: number of bytes to be copied
 *
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
