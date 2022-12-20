#include "main.h"

/**
 * print_array - prints elements of an array of integers
 * @a: pointer of type integer array
 * @n: number of elements of the array
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x <= n - 1; x++)
	{
		printf("%d", a[x]);
		if (x != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
