#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int j, k, x;

	for (j = 0; j <= 9; j++)
	{
		for (k = 0; k <= 9; k++)
		{
			x = k * j;

			printf("%d", x);
			if (k != 9)
			{
				printf(",");
			}
			if (x < 10)
			{
				printf("  ");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
		}
}
