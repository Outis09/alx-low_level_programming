#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - prints every minute of the file Jack Bauer,
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int i, r;

	for (i = 0; i <= 23; i++)
	{
		for (r = 0; r <= 59; r++)
		{
			if (i < 10)
			{
				printf("0");
				printf("%d", i);
				printf(":");
				if (r < 10)
				{
					printf("0");
					printf("%d", r);
				}
				else
				{
					printf("%d", r);
				}
				printf("\n");
			}
			else if (i >= 10)
			{
				printf("%d", i);
				printf(":");
				if (r < 10)
				{
					printf("0");
					printf("%d", r);
				}
				else
				{
					printf("%d", r);
				}
				printf("\n");
			}
		}
	}
}
