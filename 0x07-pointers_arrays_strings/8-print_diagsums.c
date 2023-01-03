#include "main.h"
#include <stdlib.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * matrix of integers
 * @a: square matrix of integers
 * @size: size of sqaure matrix
 */
void print_diagsums(int *a, int size)
{
	int i, x, tot1, tot2;

	tot1 = 0;
	tot2 = 0;

	for (i = 0; i < size; i++)
	{
		for (x = 0; x < size; x++)
		{
			if (i == x)
			{
				tot1 += a[i][x];
			}
		}
	}

	for (i = 0; i < size; i++)
	{
		for (x = 0; x < size; x++)
		{
			if ((i + x) == (size - 1))
			{
				tot2 += a[i][x];
			}
		}
	}

	printf("%i, %i\n", tot1, tot2);
}
