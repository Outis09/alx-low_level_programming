#include "main.h"
#include <string.h>

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring to be located in string
 * Return: pointer to the beginning of the located substring,
 * or Null if substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *p;

	p = strstr(haystack, needle);

	return (p);
}
