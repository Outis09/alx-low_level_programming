#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to character
 * @accept: pointer to character
 * Return: number of bytes in the initial segment of s which consist
 * only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;

	i = strspn(s, accept);

	return (i);
}
