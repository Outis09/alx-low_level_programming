#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: a pointer of type integer
 * @b: a pointer of type integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int *temp; /* create pointer to hold value */
	*temp = *a; /* assign value of *a to *temp */
	*a = *b; /* assign value of *b to *a */
	*b = *temp; /* assign value of *temp to *b */

	return (void);
}
