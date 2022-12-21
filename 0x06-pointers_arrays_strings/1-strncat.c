#include "main.h"

/**
 * *_strncat - concatenates two strings
 *
 * @dest: a pointer to a string
 * @src: a pointer to a string
 * @n: number of bytes to be used from src
 *
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
