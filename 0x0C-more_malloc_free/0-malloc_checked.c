#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes of memory to be assigned
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
