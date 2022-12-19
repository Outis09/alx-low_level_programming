#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: a pointer of type integer
 * @b: a pointer of type integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int t; /* create integer variable */
	t = *a; /* assign value of *a to t */
	*a = *b; /* assign value of *b to *a */
	*b = t; /* assign value of t to *b */
}
