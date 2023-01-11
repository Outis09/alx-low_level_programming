#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: pointer to string to be copied
 * Return: On success, a pointer to the duplicated string,
 * on failure returns NULL
 */
char *_strdup(char *str)
{
	char *new_str;
	unsigned int i, x;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
		;
	new_str = malloc(i * sizeof(char));

	if (new_str == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < i; x++)
	{
		new_str[x] = str[x];
	}
	return (new_str);
}
