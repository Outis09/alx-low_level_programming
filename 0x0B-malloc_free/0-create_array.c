#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars,
 * and initializes it with a specific char
 * @size: size of array
 * @c: specific character to be used in array initialization
 * Return: NULL if size is 0 or function fails,
 * otherwise return pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	int i;

	if (size == 0)
	{
		return (NULL);
	}

	p = malloc(sizeof(char) * size);

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		if (i == size - 1)
		{
			p[i] = '\0';
		}
		else
		{
			p[i] = c;
		}
	}

	return (p);
}
